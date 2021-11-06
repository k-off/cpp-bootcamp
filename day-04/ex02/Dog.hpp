/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:29:15 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 15:52:47 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

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

private:
    Brain *_brain;
};

std::ostream &operator<<(std::ostream &os, const Dog &d);
