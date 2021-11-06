/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 18:28:42 by pacovali      #+#    #+#                 */
/*   Updated: 2021/11/02 21:35:30 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

#include <iostream>

int main()
{
    int a = 1;
    int b = 2;

    std::cout << "a: " << a << ", b: " << b << std::endl;
    swap(a, b);
    std::cout << "swap(a, b): a: " << a << ", b: " << b << std::endl;
    std::cout << "min(5, 5): " << min(5, 5) << std::endl;
    std::cout << "min(1, 2): " << min(1, 2) << std::endl;
    std::cout << "max(5, 5): " << max(5, 5) << std::endl;
    std::cout << "max(1, 2): " << max(1, 2) << std::endl;
    return 0;
}