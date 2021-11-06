/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 19:20:35 by pacovali      #+#    #+#                 */
/*   Updated: 2021/11/02 21:33:13 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <exception>

template <class T>
class Array
{
public:
    Array() : _size(0)
    {
        _e = NULL;
    }

    Array(unsigned int size) : _size(size)
    {
        _e = NULL;
        _e = new T[_size]();
    }

    Array(const Array &r) : _size(r._size)
    {
        _e = NULL;
        _e = new T[_size]();
        if (_e)
        {
            for (unsigned int i = 0; i < _size; ++i)
            {
                _e[i] = r._e[i];
            }
        }
    }

    ~Array()
    {
        delete[] _e;
        _e = NULL;
    }

    Array &operator=(const Array &r)
    {
        _e = NULL;
        if (this != &r)
        {
            _e = new T[_size]();
            if (_e)
            {
                for (unsigned int i = 0; i < _size; ++i)
                {
                    _e[i] = r._e[i];
                }
            }
        }
        return *this;
    }

    T &operator[](unsigned int i)
    {
        if (i >= _size)
        {
            throw std::out_of_range("index out of range");
        }
        else
        {
            return _e[i];
        }
    }

    const T &operator[](unsigned int i) const
    {
        if (i >= _size)
        {
            throw std::out_of_range("index out of range");
        }
        else
        {
            return _e[i];
        }
    }

    unsigned int size() const
    {
        return _size;
    }

private:
    unsigned int _size;
    T *_e;
};