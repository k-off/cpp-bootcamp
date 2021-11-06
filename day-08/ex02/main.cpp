/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/06 10:59:16 by pacovali      #+#    #+#                 */
/*   Updated: 2021/11/06 13:01:30 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "mutantstack.hpp"

// void printMutantStack(MutantStack<int>::iterator b, const MutantStack<int>::iterator e) {
    
// }

template<class T>
void testMutantStack(T &mstack) {
    std::cout << "mstack.empty(): " << (mstack.empty() ? "true" : "false") << std::endl;
    std::cout << "mstack.size(): " << mstack.size() << std::endl;
    try {
        std::cout << "mstack.top(): " << mstack.top() << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try {
        mstack.pop();
        std::cout << "mstack.pop(): success" << std::endl;
    } catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    MutantStack<int>::iterator b = mstack.begin();
    MutantStack<int>::iterator e = mstack.end();
    std::cout << "mstack content: '";
    while (b != e) {
        std::cout << " " << *b;
        ++b;
    }
    std::cout << "'" << std::endl;
}

int main() {
    MutantStack<int> mstack;
    testMutantStack(mstack);
    std::cout << std::endl;
    mstack.push(1);
    testMutantStack(mstack);
    std::cout << std::endl;
    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);
    mstack.push(6);
    testMutantStack(mstack);
    return 0;
}