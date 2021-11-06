/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 16:38:06 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 16:55:58 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#include <string>
#include <iostream>

HumanA::HumanA( const std::string& name, const Weapon& w) {
    name_ = name;
    w_ = w;
}

HumanA::~HumanA() { }

HumanA& HumanA::operator=(const HumanA& rhs) {
    if ( this != &rhs ) {
        name_ = rhs.name_;
        w_ = rhs.w_;
    }
    return *this;
}

void HumanA::attack() const  {
    std::cout << name_ << " attacks with his " << w_.getType() << std::endl;
}
