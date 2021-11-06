/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:29:15 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 15:52:55 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

#include <string>
#include <iostream>

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat &r);
    ~Cat();
    Cat &operator=(const Cat &r);
    void makeSound() const;

private:
    Brain *_brain;
};

std::ostream &operator<<(std::ostream &os, const Cat &c);
