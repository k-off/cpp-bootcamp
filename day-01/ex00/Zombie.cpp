/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 15:27:28 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 15:52:19 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() { setName(""); }

Zombie::Zombie( const std::string& name ) { setName(name); }

Zombie::~Zombie() {
    std::cout << name_ << " destructed" << std::endl;
}

Zombie& Zombie::operator=( Zombie rhs ) {
    if (&rhs != this) {
        this->name_ = rhs.name_;
    }
    return *this;
}

Zombie& Zombie::operator=( const Zombie& rhs ) {
    if (&rhs != this) {
        this->name_ = rhs.name_;
    }
    return *this;
}

void Zombie::setName( const std::string& name ) {
    name_ = name;
}

void Zombie::announce() {
    std::cout << name_ << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie( const std::string& name ) {
    Zombie* tmp = new Zombie(name);
    tmp->announce();
    return tmp;
}

void Zombie::randomChump( const std::string& name ) {
    Zombie tmp(name);
    tmp.announce();
}
