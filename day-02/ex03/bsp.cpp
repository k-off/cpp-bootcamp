/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/21 19:51:29 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/21 23:01:53 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(const Point& a, const Point& b, const Point& c, const Point& p) {
    bool ret = false;
    if (p != a && p != b && p != c) {
        // std::cout << "not vertice" << std::endl;
        Point ap((p - a).normalize());
        Point bp((p - b).normalize());
        Point cp((p - c).normalize());
        Point ab((b - a).normalize());
        Point bc((c - b).normalize());
        Point ca((a - c).normalize());
        if (ap != ab && bp != bc && cp != ca) {
            if (ab.doubleCross(ap).normalize().dot(bc) > 0
            && bc.doubleCross(bp).normalize().dot(ca) > 0
            && ca.doubleCross(bp).normalize().dot(ab) > 0) {
                ret = true;
            }
        }
    }
    return ret;
}