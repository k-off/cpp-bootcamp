/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:54:30 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/20 20:47:46 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
#include <string>

int main() {
    Fixed a(2);
    Fixed b(3.5f);
    Fixed c(4);
    Fixed d(6);

    std::cout << "a:" << a << " -a:" << -a << " +a:" << +a << " a++:" << a++ << " a:" << a <<  " ++a:" << ++a << " a:" << a << std::endl;
    std::cout << "b - (-a): " << b - (-a) << ", b:" << b << ", a:" << a << std::endl;
    std::cout << "c * d: " << c * d << ", c:" << c << ", d:" << d <<  std::endl;
    std::cout << "c * d / b: " << c * d / b << ", c:" << c << ", d:" << d << ", b:" << b << std::endl;
    std::cout << "a > b:" << (a > b) << ", a:" << a << ", b:" << b << std::endl;
    return 0;
}