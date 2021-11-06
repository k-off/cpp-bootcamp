/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:35:24 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 16:07:50 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Dog '" << _type << "' has been constructed" << std::endl;
}

Dog::Dog(const Dog &r)
{
    _type = r._type;
    _brain = new Brain(*r._brain);
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog '" << _type << "' has been destructed" << std::endl;
}

Dog &Dog::operator=(const Dog &r)
{
    if (&r != this)
    {
        _type = r._type;
        std::cout << "Copying brain:" << std::endl;
        *_brain = *r._brain;
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
