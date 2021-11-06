/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 20:16:39 by pacovali      #+#    #+#                 */
/*   Updated: 2021/11/03 20:49:50 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <stdexcept>
#include <iostream>

template <class T>
bool easyfind(const T& t, const int val) {
    bool res = true;
    
    try {
        typename T::const_iterator it = std::find(t.begin(), t.end(), val);
        if (it == t.end()) {
        res = false;
        throw std::runtime_error("value not found");
    }
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return res;
}