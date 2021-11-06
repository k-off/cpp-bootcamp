/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:18:30 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 16:27:50 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "WrongAnimal";
    std::cout << "WrongAnimal '" << _type << "' has been constructed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &r)
{
    _type = r._type;
    std::cout << "WrongAnimal '" << _type << "' has been copied" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal '" << _type << "' has been destructed" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &r)
{
    if (&r != this)
    {
        _type = r._type;
    }
    return *this;
}

std::string WrongAnimal::getType() const
{
    return _type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Ghgrghshshshshhhssss" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const WrongAnimal &a)
{
    os << "Wrong animal of type '" << a.getType() << "'";
    return os;
}