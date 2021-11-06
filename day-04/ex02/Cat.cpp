/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:35:24 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 16:07:05 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Cat '" << _type << "' has been constructed" << std::endl;
}

Cat::Cat(const Cat &r)
{
    _type = r._type;
    _brain = new Brain(*r._brain);
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat '" << _type << "' has been destructed" << std::endl;
}

Cat &Cat::operator=(const Cat &r)
{
    if (&r != this)
    {
        _type = r._type;
        std::cout << "Copying brain:" << std::endl;
        *_brain = *r._brain;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const Cat &c)
{
    os << "Wrong cat of type '" << c.getType() << "'";
    return os;
}
