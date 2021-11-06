/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 16:37:45 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 17:21:42 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

#include <string>
#include <iostream>

HumanB::HumanB( const std::string& name) : w_(0) {
    name_ = name;
}

HumanB::~HumanB() { }

HumanB& HumanB::operator=(const HumanB& rhs) {
    if ( this != &rhs ) {
        name_ = rhs.name_;
        if (rhs.w_) {
            *w_ = *rhs.w_;
        }
    }
    return *this;
}

void HumanB::setWeapon( Weapon& w) {
    w_ = &w;
}

void HumanB::attack() const  {
    std::cout << name_ << " attacks with his " << (w_ ? w_->getType() : "") << std::endl;
}
