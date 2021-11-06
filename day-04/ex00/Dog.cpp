/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:35:24 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 16:27:45 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog '" << _type << "' has been constructed" << std::endl;
}

Dog::Dog(const Dog &r)
{
    _type = r._type;
    std::cout << "Dog '" << _type << "' has been copied" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog '" << _type << "' has been destructed" << std::endl;
}

Dog &Dog::operator=(const Dog &r)
{
    if (&r != this)
    {
        _type = r._type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Bark" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Dog &d)
{
    os << "Wrong cat of type '" << d.getType() << "'";
    return os;
}
