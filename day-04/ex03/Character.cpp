/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/24 11:21:31 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/24 14:33:04 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

Character::Character() : _name("") {
    for (int i = 0; i < 4; ++i) {
        _mats[i] = 0;
    }
    std::cout << "Emptry character has been constructed" << std::endl;
}

Character::Character(const std::string& name) : _name(name) {
    for (int i = 0; i < 4; ++i) {
        _mats[i] = 0;
    }
    std::cout << "Emptry character has been constructed" << std::endl;
}

Character::Character(const Character& c) {
    *this = c;
}

Character::~Character() {
    for (int i = 0; i < 4; ++i) {
        delete _mats[i];
        _mats[i] = 0;
    }
    std::cout << "Character has been distructed" << std::endl;
}

Character& Character::operator=(const Character& c) {
    _name = c._name;
    for (int i = 0; i < 4; ++i) {
        if (_mats[i]) {
            delete _mats[i];
        }
        _mats[i] = c._mats[i] ? c._mats[i]->clone() : 0;
    }
    std::cout << "Character has been copied" << std::endl;
    return *this;
}

const std::string& Character::getName() const {
    return _name;
}

void Character::equip(AMateria* m) {
    for (int i = 0; i < 4; ++i) {
        if (!_mats[i]) {
            _mats[i] = m->clone();
            std::cout << "A materia of type " << m->getType() 
                << " has been equipped to solt #" << i << std::endl;
            break ;
        }
    }
}

void Character::unequip(const int& idx) {
    if (idx > -1 && idx < 4 && _mats[idx]) {
        std::cout << "A materia of type " << _mats[idx]->getType() 
                << " has been unequipped to solt #" << idx << std::endl;
        delete _mats[idx];
        _mats[idx] = 0; // it must not delete materia, so in my case it leaks
    }
}

void Character::use(const int& idx, ICharacter& target) {
    if (idx > -1 && idx < 4 &&_mats[idx] && target.getName().size()) {
        _mats[idx]->use(target);
    }
}
