/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:54:30 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/21 21:25:31 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#include <iostream>
#include <string>

bool bsp(const Point& a, const Point& b, const Point& c, const Point& p);

int main() {
    Point a(0, 0);
    Point b(0, 2);
    Point c(2, 0);
    Point p;
    std ::cout << "Input point:" << std::endl;
    std::cin >> p;
    std::cout << "bsp(" << a << ", " << b << ", " << c << ", " << p  << ") = ";
    std::cout << (bsp(a, b, c, p) ? "true" : "false")  << std::endl;
    return 0;
}