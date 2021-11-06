/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 10:53:04 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 12:16:53 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
public:
    ClapTrap(const std::string &name);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &r);
    void attack(const std::string &target);
    void takeDamage(const unsigned &v);
    void beRepaired(const unsigned &v);
    std::string getName() const;
    unsigned getHitP() const;
    unsigned getNrgP() const;
    unsigned getDmgP() const;

private:
    ClapTrap();
    std::string _name;
    unsigned _hitP;
    unsigned _nrgP;
    unsigned _dmgP;
};

std::ostream &operator<<(std::ostream &os, const ClapTrap &c);