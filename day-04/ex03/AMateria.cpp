/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/24 10:20:37 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/24 12:31:53 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("") {}

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(const AMateria &r)
{
    *this = r;
}

AMateria::~AMateria() {

}

AMateria &AMateria::operator=(const AMateria &m)
{
    if (this != &m) {
        ;
    }
    return *this;
}

const std::string &AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "AMateria has been used on " << target.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &os, const AMateria &a)
{
    os << "AMateria(" << a.getType() << ")";
    return os;
}
