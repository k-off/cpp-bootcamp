/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:18:05 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 16:27:32 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal
{
public:
    Animal();
    Animal(const Animal &r);
    ~Animal();
    Animal &operator=(const Animal &r);
    std::string getType() const;
    void makeSound() const;

protected:
    std::string _type;
};

std::ostream &operator<<(std::ostream &os, const Animal &a);