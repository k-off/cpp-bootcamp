/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ICharacter.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/24 10:00:38 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/24 14:27:08 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class AMateria;

class ICharacter
{
public:
    virtual ~ICharacter(){};
    virtual const std::string &getName() const = 0;
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(const int &idx) = 0;
    virtual void use(const int &idx, ICharacter &target) = 0;
};