/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 12:23:24 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 13:28:24 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

#include <string>
#include <iostream>

class ScavTrap : public ClapTrap {
public:
    ScavTrap(const std::string& name);
    ~ScavTrap();
    ScavTrap& operator=(const ScavTrap &r);
    void attack(const std::string &target);
    void takeDamage(const unsigned &v);
    void beRepaired(const unsigned &v);
    void guardGate() const;
};

std::ostream &operator<<(std::ostream &os, const ScavTrap &c);