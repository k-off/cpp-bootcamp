/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:35:24 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 16:27:57 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "WrongCat '" << _type << "' has been constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &r)
{
    _type = r._type;
    std::cout << "WrongCat '" << _type << "' has been copied" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat '" << _type << "' has been destructed" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &r)
{
    if (&r != this)
    {
        _type = r._type;
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Woem" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const WrongCat &wc)
{
    os << "Wrong cat of type '" << wc.getType() << "'";
    return os;
}
