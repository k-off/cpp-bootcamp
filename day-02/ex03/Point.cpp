/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/20 20:52:39 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/21 22:58:09 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Point& rhs) : _x(rhs._x), _y(rhs._y) {}

Point::Point(const int& x, const int& y) : _x(x), _y(y) {}

Point::Point(const float& x, const float& y) : _x(x), _y(y) {}

Point::Point(const Fixed& x, const Fixed& y) : _x(x), _y(y) {}

Point::~Point() {}

Point& Point::operator=(const Point& rhs) {
    _x = rhs._x;
    _y = rhs._y;
    return *this;
}

Point& Point::operator+=(const Point& rhs) {
    _x += rhs._x;
    _y += rhs._y;
    return *this;
}

Point& Point::operator-=(const Point& rhs) {
    _x -= rhs._x;
    _y -= rhs._y;
    return *this;
}

Point& Point::operator*=(const Fixed& rhs) {
    _x *= rhs;
    _y *= rhs;
    return *this;
}

Point& Point::operator/=(const Fixed& rhs) {
    _x /= rhs;
    _y /= rhs;
    return *this;
}

Point Point::operator+(const Point& rhs) const {
    return Point(*this) += rhs;
}

Point Point::operator-(const Point& rhs) const {
    return Point(*this) -= rhs;
}

Point Point::operator*(const Fixed& rhs) const {
    return Point(*this) *= rhs;
}

Point Point::operator/(const Fixed& rhs) const {
    return Point(*this) /= rhs;
}

Point Point::operator-() const {
    return Point(-_x, -_y);
}

bool Point::operator==(const Point& rhs) const {
    return _x == rhs._x && _y == rhs._y;
}

bool Point::operator!=(const Point& rhs) const {
    return !operator==(rhs);
}

Fixed Point::dot(const Point& rhs) const {
    return _x * rhs._x + _y * rhs._y;
}

Fixed Point::len() const {
    float d = dot(*this).toFloat();
    float delta(1.0f / (1 << 8));
    if (d == 0) return d;
    float f(d < 0 ? 0.999f : 1.0f);
    while ((f*f - d) > delta || (f*f - d) < -delta) {
        f = (f + d / f) / 2;
    }
    return Fixed(f);
}

Point Point::normalize() const {
    Fixed tmp = len();
    return Point(_x / tmp, _y / tmp);
}

Point& Point::normalize() {
    Fixed tmp = len();
    if (tmp < Fixed(1.0f / (1<<8))) {
        _x = 0;
        _y = 0;
    } else {
        _x /= tmp;
        _y /= tmp;
    }
    return *this;
}

Point Point::doubleCross(const Point& rhs) const {
    Fixed z = this->normalize()._x * rhs.normalize()._y - this->normalize()._y * rhs.normalize()._x;
    return Point(-z * rhs.normalize()._y, z * rhs.normalize()._x).normalize();
}

float Point::getX() const {
    return _x.toFloat();
}

float Point::getY() const {
    return _y.toFloat();
}

std::istream& operator>>(std::istream& is, Point& rhs) {
    float x, y;
    std::cout << "Type in x:";
    std::cin >> x;
    std::cout << "Type in y:";
    std::cin >> y;
    rhs = Point(x, y);
    return is;
}

std::ostream& operator<<(std::ostream& os, const Point& rhs) {
    std::cout << "(" << rhs.getX() << ", " << rhs.getY() << ")";
    return os;
}
