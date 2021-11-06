/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 18:44:48 by pacovali      #+#    #+#                 */
/*   Updated: 2021/11/02 21:34:46 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>

template <class V>
void print(const V &v)
{
    std::cout << std::showpoint << v << " ";
}

template <class T, class U>
void iter(T *adr, size_t len, U fptr)
{
    for (size_t i = 0; i < len; ++i)
    {
        (*fptr)(adr[i]);
    }
}