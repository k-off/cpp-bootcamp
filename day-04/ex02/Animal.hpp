/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:18:05 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 16:46:57 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal
{
public:
    virtual ~Animal() = 0;
    Animal &operator=(const Animal &r);
    std::string getType() const;
    virtual void makeSound() const = 0;

protected:
    Animal();
    Animal(const Animal &r);
    std::string _type;
};

std::ostream &operator<<(std::ostream &os, const Animal &a);