/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:53:35 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/20 20:28:02 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed {
public:
    Fixed();
    Fixed(const Fixed& rhs);
    Fixed(const int& rhs);
    Fixed(const float& rhs);
    ~Fixed();

    Fixed& operator=(const Fixed& rhs);
    Fixed& operator=(const int& rhs);
    Fixed& operator=(const float& rhs);

    Fixed operator-();
    Fixed operator+();

    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    Fixed& operator+=(const Fixed& rhs);
    Fixed operator+(const Fixed& rhs);
    Fixed& operator-=(const Fixed& rhs);
    Fixed operator-(const Fixed& rhs);
    Fixed& operator/=(const Fixed& rhs);
    Fixed operator/(const Fixed& rhs);
    Fixed& operator*=(const Fixed& rhs);
    Fixed operator*(const Fixed& rhs);

    bool operator>(const Fixed& rhs);
    bool operator<(const Fixed& rhs);
    bool operator==(const Fixed& rhs);
    bool operator!=(const Fixed& rhs);
    bool operator>=(const Fixed& rhs);
    bool operator<=(const Fixed& rhs);

    static Fixed& min(Fixed& lhs, Fixed& rhs);
    static Fixed& max(Fixed& lhs, Fixed& rhs);

    int getRawBits() const;
    void setRawBits(const int& rhs);
    int getOffset() const;
    float toFloat() const;
    int toInt() const;

private:
    int value;
    static const int off = 8;

};

std::ostream& operator<<(std::ostream& os, const Fixed& f);