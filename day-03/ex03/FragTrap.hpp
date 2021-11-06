/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 13:32:30 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 14:00:47 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

#include <string>
#include <iostream>

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap(const std::string &name);
    FragTrap();
    ~FragTrap();
    FragTrap &operator=(const FragTrap &r);
    void attack(const std::string &target);
    void takeDamage(const unsigned &v);
    void beRepaired(const unsigned &v);
    void highFiveGuys() const;
    std::string _name;
};

std::ostream &operator<<(std::ostream &os, const FragTrap &c);