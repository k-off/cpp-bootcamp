/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 13:44:07 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 14:08:15 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name)
{
    FragTrap::ClapTrap::_name = name + "_clap_name";
    FragTrap::_name = name + "_frag_name";
    ScavTrap::_name = name + "_scav_name";
    _name = name;
    _hitP = 100;
    _nrgP = 100;
    _dmgP = 30;
    std::cout << "DiamondTrap '" << _name << "' constructed" << std::endl;
    std::cout << "ClapTrap name set to '" << FragTrap::ClapTrap::_name << "'" << std::endl;
    std::cout << "FragTrap name set to '" << FragTrap::_name << "'" << std::endl;
    std::cout << "ScavTrap name set to '" << ScavTrap::_name << "'" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap '" << _name << "' destructed" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &r)
{
    _name = r._name;
    _hitP = r._hitP;
    _nrgP = r._nrgP;
    _dmgP = r._dmgP;
    return *this;
}

void DiamondTrap::attack(const std::string &target)
{
    if (_nrgP > 5)
    {
        _nrgP -= 5;
        std::cout << "DiamondTrap '" << _name << "' attacked '" << target
                  << "', causing " << _dmgP << " points of damage!" << std::endl;
    }
    else
    {
        std::cout << "DiamondTrap '" << _name
                  << "' no energy left for attack" << std::endl;
    }
}

void DiamondTrap::takeDamage(const unsigned &v)
{
    _hitP -= (v > _hitP ? _hitP : v);
    std::cout << "DiamondTrap " << _name << " received "
              << v << " damage..." << std::endl;
    std::cout << _hitP << " hit points left!" << std::endl;
}

void DiamondTrap::beRepaired(const unsigned &v)
{
    _hitP += v;
    std::cout << "DiamondTrap '" << _name << "' has been repaired with " << v
              << " hit points..." << std::endl;
    std::cout << _hitP << " hit points left!" << std::endl;
}

void DiamondTrap::whoAmI() const
{
    std::cout << "DiamondTrap name '" << _name << "'" << std::endl;
    std::cout << "ClapTrap name '" << FragTrap::ClapTrap::_name << "'" << std::endl;
    std::cout << "FragTrap name '" << FragTrap::_name << "'" << std::endl;
    std::cout << "ScavTrap name '" << ScavTrap::_name << "'" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const DiamondTrap &c)
{
    std::cout << "DiamondTrap '" << c.getName() << "' (hit points: " << c.getHitP()
              << ", energy: " << c.getNrgP() << ", damage: " << c.getDmgP() << ")";
    return os;
}