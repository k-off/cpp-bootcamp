/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 13:44:30 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 14:08:18 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
public:
    DiamondTrap(const std::string &name);
    ~DiamondTrap();
    DiamondTrap &operator=(const DiamondTrap &r);
    void attack(const std::string &target);
    void takeDamage(const unsigned &v);
    void beRepaired(const unsigned &v);
    void whoAmI() const;

private:
    std::string _name;
};

std::ostream &operator<<(std::ostream &os, const DiamondTrap &c);