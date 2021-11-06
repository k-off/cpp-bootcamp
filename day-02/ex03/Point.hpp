/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 20:52:25 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/21 21:01:35 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"
#include <iostream>

class Point {
public:
    Point();
    Point(const Point& rhs);
    Point(const int& x, const int& y);
    Point(const float& x, const float& y);
    Point(const Fixed& x, const Fixed& y);
    ~Point();

    Point& operator=(const Point& rhs);
    
    Point& operator+=(const Point& rhs);
    Point& operator-=(const Point& rhs);
    Point& operator*=(const Fixed& rhs);
    Point& operator/=(const Fixed& rhs);
    Point operator+(const Point& rhs) const;
    Point operator-(const Point& rhs) const;
    Point operator*(const Fixed& rhs) const;
    Point operator/(const Fixed& rhs) const;
    Point operator-() const;

    bool operator==(const Point& rhs) const;
    bool operator!=(const Point& rhs) const;

    Fixed dot(const Point& rhs) const;
    Fixed len() const;
    Point normalize() const;
    Point& normalize();
    Point doubleCross(const Point& rhs) const;
    float getX() const;
    float getY() const;

private:
    Fixed _x;
    Fixed _y;
};

std::istream& operator>>(std::istream& is, Point& rhs);
std::ostream& operator<<(std::ostream& os, const Point& rhs);
