/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:53:35 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/19 21:57:09 by pacovali      ########   odam.nl         */
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