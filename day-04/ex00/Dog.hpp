/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:29:15 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 16:27:48 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

#include <string>
#include <iostream>

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog &r);
    ~Dog();
    Dog &operator=(const Dog &r);
    void makeSound() const;
};

std::ostream &operator<<(std::ostream &os, const Dog &d);