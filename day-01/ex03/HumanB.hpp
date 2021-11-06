/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 16:37:35 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 17:21:58 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

#include <string>

class HumanB {
public:
    HumanB( const std::string& name);
    ~HumanB();

    HumanB& operator=(const HumanB& rhs);
    
    void setWeapon( Weapon& w);
    void attack() const ;
private:
    std::string name_;
    Weapon* w_;
};
