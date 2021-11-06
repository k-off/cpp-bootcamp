/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:54:30 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/19 22:10:48 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
#include <string>

int main() {
    Fixed a;
    Fixed const b(10);
    Fixed const c(42.42f);
    Fixed const d(b);

    a = Fixed(1234.4321f);
    std::cout << a << ", raw: " << a.getRawBits() << ", int = " << a.toInt() << ", float = " << a.toFloat() << std::endl;
    std::cout << b << ", raw: " << b.getRawBits() << ", int = " << b.toInt() << ", float = " << b.toFloat() << std::endl;
    std::cout << c << ", raw: " << c.getRawBits() << ", int = " << c.toInt() << ", float = " << c.toFloat() << std::endl;
    std::cout << d << ", raw: " << d.getRawBits() << ", int = " << d.toInt() << ", float = " << d.toFloat() << std::endl;

    float f = b.toFloat();
    int i = d.toInt();
    std::cout << "f=" << f << ", i=" << i << std::endl;
    return 0;
}