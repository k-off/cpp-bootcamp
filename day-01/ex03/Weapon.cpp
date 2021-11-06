/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 16:37:17 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 16:47:44 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <string>

Weapon::Weapon() {
    type_ = "";
}

Weapon::Weapon( const std::string& type ) {
    type_ = type;
}

Weapon::~Weapon() { }

Weapon& Weapon::operator=(const Weapon& rhs) {
    if (&rhs != this) {
        type_ = rhs.type_;
    }
    return *this;
}


void Weapon::setType(const std::string& type) {
    type_ = type;
}

const std::string& Weapon::getType() const {
    return type_;
}
