/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:53:48 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/19 21:16:57 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

Fixed::Fixed() {
    value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& rhs) {
    value = rhs.value;
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
    value = 0;
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
    if (this != &rhs) {
        value = rhs.value;
    }
    std::cout << "Assignation operator called" << std::endl;
    return *this;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(const int& rhs) {
    std::cout << "setRawBits member function called" << std::endl;
    value = rhs;
}
