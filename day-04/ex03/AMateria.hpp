/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/24 09:45:26 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/24 12:32:03 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string _type;

public:
    AMateria();
    AMateria(const std::string &type);
    AMateria(const AMateria &type);
    virtual ~AMateria();
    AMateria &operator=(const AMateria &m);
    const std::string &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

std::ostream &operator<<(std::ostream &os, const AMateria &a);