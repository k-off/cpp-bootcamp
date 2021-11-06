/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:18:05 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 16:27:54 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &r);
    ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &r);
    std::string getType() const;
    void makeSound() const;

protected:
    std::string _type;
};

std::ostream &operator<<(std::ostream &os, const WrongAnimal &a);