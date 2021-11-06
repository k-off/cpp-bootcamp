/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:18:30 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 16:47:09 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    _type = "";
    std::cout << "Animal '" << _type << "' has been constructed" << std::endl;
}

Animal::Animal(const Animal &r)
{
    _type = r._type;
}

Animal::~Animal()
{
    std::cout << "Animal '" << _type << "' has been destructed" << std::endl;
}

Animal &Animal::operator=(const Animal &r)
{
    if (&r != this)
    {
        _type = r._type;
    }
    return *this;
}

std::string Animal::getType() const
{
    return _type;
}

std::ostream &operator<<(std::ostream &os, const Animal &a)
{
    os << "Animal of type '" << a.getType() << "'";
    return os;
}