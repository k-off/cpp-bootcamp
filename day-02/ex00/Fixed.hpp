/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 20:53:35 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/19 21:12:03 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed {
public:
    Fixed();
    Fixed(const Fixed& rhs);
    ~Fixed();

    Fixed& operator=(const Fixed& rhs);

    int getRawBits() const;
    void setRawBits(const int& rhs);

private:
    int value;
    static const int off = 8;

};