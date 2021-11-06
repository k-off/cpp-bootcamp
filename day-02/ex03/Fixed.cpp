/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:53:48 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/21 22:01:00 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>

Fixed::Fixed() {
    value = 0;
}

Fixed::Fixed(const Fixed& rhs) {
    value = rhs.value;
}


Fixed::Fixed(const int& rhs) {
    value = (rhs << off);
}

Fixed::Fixed(const float& rhs) {
    value = static_cast<int>(rhs * (1 << off));
}

Fixed::~Fixed() {
    value = 0;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
    if (this != &rhs) {
        value = rhs.value;
    }
    return *this;
}

Fixed& Fixed::operator=(const int& rhs) {
    value = (rhs << off);
    return *this;
}

Fixed& Fixed::operator=(const float& rhs) {
    value = static_cast<int>(rhs * (1 << off));
    return *this;
}

Fixed Fixed::operator-() const {
    Fixed ret;
    ret.value = -value;
    return ret;
}

Fixed Fixed::operator+() const {
    Fixed ret;
    ret.value = value > 0 ? value : -value;
    return ret;
}

Fixed& Fixed::operator++() {
    value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed old = *this;
    value++;
    return old;
}

Fixed& Fixed::operator--() {
    value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed old = *this;
    value--;
    return old;
}

Fixed& Fixed::operator+=(const Fixed& rhs) {
    value += rhs.value;
    return *this;
}

Fixed& Fixed::operator-=(const Fixed& rhs) {
    value -= rhs.value;
    return *this;
}

Fixed& Fixed::operator/=(const Fixed& rhs) {
    value = static_cast<int>(static_cast<double>(value) * (1 << off) / rhs.value);
    return *this;
}

Fixed& Fixed::operator*=(const Fixed& rhs) {
    value = static_cast<int>(static_cast<double>(value) / (1 << off) * rhs.value);
    return *this;
}

Fixed Fixed::operator+(const Fixed& rhs) const {
    return (Fixed(*this) += rhs);
}

Fixed Fixed::operator-(const Fixed& rhs) const {
    return (Fixed(*this) -= rhs);
}

Fixed Fixed::operator/(const Fixed& rhs) const {
    return (Fixed(*this) /= rhs);
}

Fixed Fixed::operator*(const Fixed& rhs) const {
    return (Fixed(*this) *= rhs);
}

bool Fixed::operator>(const Fixed& rhs) const {
    return value > rhs.value;
}

bool Fixed::operator<(const Fixed& rhs) const {
    return value < rhs.value;
}

bool Fixed::operator==(const Fixed& rhs) const {
    return value == rhs.value;
}

bool Fixed::operator!=(const Fixed& rhs) const {
    return value != rhs.value;
}

bool Fixed::operator>=(const Fixed& rhs) const {
    return value >= rhs.value;
}

bool Fixed::operator<=(const Fixed& rhs) const {
    return value <= rhs.value;
}


Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) {
    return (lhs > rhs ? rhs : lhs);
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) {
    return (lhs < rhs ? rhs : lhs);
}

int Fixed::getRawBits() const {
    return value;
}

void Fixed::setRawBits(const int& rhs) {
    value = rhs;
}

int Fixed::getOffset() const {
 return off;
}

float Fixed::toFloat() const {
    float res = static_cast<float>(getRawBits());
    res /= (1 << getOffset());
    return res;
}

int Fixed::toInt() const {
    return (value >> off);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f) {
    float res = static_cast<float>(f.getRawBits());
    res /= (1 << f.getOffset());
    os << res;
    return os;
}

std::istream& operator>>(std::istream& is, Fixed& f) {
    float tmp;
    std::cin >> tmp;
    f = tmp;
    return is;
}