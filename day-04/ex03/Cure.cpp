/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/24 10:42:32 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/24 11:02:07 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    _type = "cure";
    std::cout << "Cure constructed" << std::endl;
}

Cure::Cure(const Cure &i)
{
    _type = "cure";
    *this = i;
}

Cure::~Cure() {
    std::cout << "Cure distructed" << std::endl;
}

Cure &Cure::operator=(const Cure &i)
{
    if (this != &i)
    {
        ;
        std::cout << "Cure copied" << std::endl;
    }
    return *this;
}

Cure *Cure::clone() const
{
    std::cout << "Cure created a clone" << std::endl;
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << ";s wounds *" << std::endl;
}
