/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/06 11:00:31 by pacovali      #+#    #+#                 */
/*   Updated: 2021/11/06 13:13:26 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <list>
#include <deque>
#include <stack>
#include <vector>
#include <cstddef>
#include <iterator>
#include <stdexcept>

#define INHERIT_STACK //there are two implementations of mutantnstack, comment/uncomment whis line to test both

template<
    class T,
    class Container = std::deque<T>
#ifndef INHERIT_STACK
> class MutantStack {
    explicit MutantStack( const Container& cont = Container() ) : c(cont) { }
    MutantStack( const MutantStack& r ) : c(r.c) { }
    ~MutantStack() {}

    const MutantStack& operator=(const MutantStack& r) {
        if (this != &r) {
            c = r.c;
        }
        return *this;
    }

    T top() const { 
        if (c.size()) {
            return c.back();
        } else {
            throw std::range_error("can't top() from an empty MutatedStack");
        }
    }

    bool empty() const { return (c.size() == 0); }
    size_t size() const { return c.size(); }

    void push(const T& t) { c.push_back(t); }
    void pop() {
        if (c.size()) {
            c.pop_back();
        } else {
            throw std::range_error("can't pop() from an empty MutatedStack");
        }
    }
        
protected:
    Container c;
#else
> class MutantStack : public std::stack<T, Container> {
#endif
public:
    typedef typename Container::iterator iterator;
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    typedef typename Container::const_iterator const_iterator;
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};