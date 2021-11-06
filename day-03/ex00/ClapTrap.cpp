/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 11:15:40 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 12:16:49 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _hitP(10), _nrgP(5), _dmgP(0)
{
    _name = name;
    std::cout << "ClapTrap '" << _name << "' constructed" << std::endl;
}

ClapTrap::ClapTrap()
    : _hitP(10), _nrgP(5), _dmgP(0)
{
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap '" << _name << "' destructed" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &r)
{
    _name = r._name;
    _hitP = r._hitP;
    _nrgP = r._nrgP;
    _dmgP = r._dmgP;
    return *this;
}

void ClapTrap::attack(const std::string &target)
{
    _nrgP -= (_nrgP > 0);
    std::cout << "ClapTrap '" << _name << "' attacked '" << target << "', causing "
              << _dmgP << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(const unsigned &v)
{
    _hitP -= (v > _hitP ? _hitP : v);
    std::cout << "ClapTrap " << _name << " received " << v << " damage..." << std::endl;
    std::cout << _hitP << " hit points left!" << std::endl;
}

void ClapTrap::beRepaired(const unsigned &v)
{
    _hitP += v;
    std::cout << "ClapTrap '" << _name << "' has been repaired with " << v
              << " hit points..." << std::endl;
    std::cout << _hitP << " hit points left!" << std::endl;
}

std::string ClapTrap::getName() const
{
    return _name;
}

unsigned ClapTrap::getHitP() const
{
    return _hitP;
}

unsigned ClapTrap::getNrgP() const
{
    return _nrgP;
}

unsigned ClapTrap::getDmgP() const
{
    return _dmgP;
}

std::ostream &operator<<(std::ostream &os, const ClapTrap &c)
{
    std::cout << "ClapTrap '" << c.getName() << "' (hit points: " << c.getHitP()
        << ", energy: " << c.getNrgP() << ", damage: " << c.getDmgP() << ")";
    return os;
}
