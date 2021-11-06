/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:29:15 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 16:28:00 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

#include <string>
#include <iostream>

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &r);
    ~WrongCat();
    WrongCat &operator=(const WrongCat &r);
    void makeSound() const;
};

std::ostream &operator<<(std::ostream &os, const WrongCat &wc);