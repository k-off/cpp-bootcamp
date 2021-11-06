/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 12:23:38 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 13:30:28 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) {
    _name = name;
    _hitP = 100;
    _nrgP = 50;
    _dmgP = 20;
    std::cout << "ScavTrap '" << _name << "' constructed" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap '" << _name << "' destructed" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &r) {
    _name = r._name;
    _hitP = r._hitP;
    _nrgP = r._nrgP;
    _dmgP = r._dmgP;
    return *this;
}

void ScavTrap::attack(const std::string &target) {
    if (_nrgP > 2) {
    _nrgP -= 2;
    std::cout << "ScavTrap '" << _name << "' attacked '" << target 
        << "', causing " << _dmgP << " points of damage!" << std::endl;
    } else {
        std::cout << "ScavTrap '" << _name 
            << "' no energy left for attack" << std::endl;
    }
}

void ScavTrap::takeDamage(const unsigned &v) {
    _hitP -= (v > _hitP ? _hitP : v);
    std::cout << "ScavTrap " << _name << " received " << v << " damage..." << std::endl;
    std::cout << _hitP << " hit points left!" << std::endl;
}

void ScavTrap::beRepaired(const unsigned &v) {
    _hitP += v;
    std::cout << "ScavTrap '" << _name << "' has been repaired with " << v
              << " hit points..." << std::endl;
    std::cout << _hitP << " hit points left!" << std::endl;
}

void ScavTrap::guardGate() const {
    std::cout << "ScavTrap '" << getName() 
        << "' has entered Gate keeper mode" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const ScavTrap &c) {
    std::cout << "ScavTrap '" << c.getName() << "' (hit points: " << c.getHitP()
        << ", energy: " << c.getNrgP() << ", damage: " << c.getDmgP() << ")";
    return os;
}
