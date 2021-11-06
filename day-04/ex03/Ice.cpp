/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/24 10:42:32 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/24 13:28:14 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    _type = "ice";
    std::cout << "Ice constructed" << std::endl;
}

Ice::Ice(const Ice &i)
{
    _type = "ice";
    *this = i;
}

Ice::~Ice() {
    std::cout << "Ice distructed" << std::endl;
}

Ice &Ice::operator=(const Ice &i)
{
    if (this != &i)
    {
        ;
        std::cout << "Ice copied" << std::endl;
    }
    return *this;
}

Ice *Ice::clone() const
{
    std::cout << "Ice created a clone" << std::endl;
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
