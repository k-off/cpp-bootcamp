/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   whatever.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 18:18:48 by pacovali      #+#    #+#                 */
/*   Updated: 2021/11/02 21:35:49 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>

template <class T>
void swap(T &l, T &r)
{
    T tmp(l);
    l = r;
    r = tmp;
}

template <class T>
T min(const T &l, const T &r)
{
    return (r > l ? l : r);
}

template <class T>
T max(const T &l, const T &r)
{
    return (r < l ? l : r);
}
