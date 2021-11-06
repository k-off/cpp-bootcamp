/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 13:33:40 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 13:40:16 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name)
{
    _name = name;
    _hitP = 100;
    _nrgP = 100;
    _dmgP = 30;
    std::cout << "FragTrap '" << _name << "' constructed" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap '" << _name << "' destructed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &r)
{
    _name = r._name;
    _hitP = r._hitP;
    _nrgP = r._nrgP;
    _dmgP = r._dmgP;
    return *this;
}

void FragTrap::attack(const std::string &target)
{
    if (_nrgP > 5)
    {
        _nrgP -= 5;
        std::cout << "FragTrap '" << _name << "' attacked '" << target
                  << "', causing " << _dmgP << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "FragTrap '" << _name
                  << "' no energy left for attack" << std::endl;
    }
}

void FragTrap::takeDamage(const unsigned &v)
{
    _hitP -= (v > _hitP ? _hitP : v);
    std::cout << "FragTrap " << _name << " received " << v << " damage..." << std::endl;
    std::cout << _hitP << " hit points left!" << std::endl;
}

void FragTrap::beRepaired(const unsigned &v)
{
    _hitP += v;
    std::cout << "FragTrap '" << _name << "' has been repaired with " << v
              << " hit points..." << std::endl;
    std::cout << _hitP << " hit points left!" << std::endl;
}

void FragTrap::highFiveGuys() const
{
    std::cout << "FragTrap '" << getName()
              << "' has requested a high-five" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const FragTrap &c)
{
    std::cout << "FragTrap '" << c.getName() << "' (hit points: " << c.getHitP()
              << ", energy: " << c.getNrgP() << ", damage: " << c.getDmgP() << ")";
    return os;
}
