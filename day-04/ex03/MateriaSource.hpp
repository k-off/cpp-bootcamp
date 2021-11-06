/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/24 12:32:54 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/24 13:33:10 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <string>
#include <iostream>

class MateriaSource : public IMateriaSource
{
private:
    AMateria **_mats;
    size_t _size;
    void _release();
public:
    MateriaSource();
    MateriaSource(const MateriaSource &m);
    ~MateriaSource();
    MateriaSource &operator=(const MateriaSource &m);
    void learnMateria(const AMateria *a);
    AMateria *createMateria(const std::string &m);
};