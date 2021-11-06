/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/24 11:10:34 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/24 13:53:49 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter {
private:
    std::string _name;
    AMateria *_mats[4];
public:
    Character();
    Character(const std::string& name);
    Character(const Character& c);
    ~Character();
    Character& operator=(const Character& c);
    const std::string& getName() const;
    void equip(AMateria* m);
    void unequip(const int& idx);
    void use(const int& idx, ICharacter& target);
};