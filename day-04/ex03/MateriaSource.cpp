/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/24 12:41:02 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/24 14:22:48 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    _size = 0;
    _mats = 0;
    std::cout << "Empty materia source has been constructed" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &m)
{
    *this = m;
}

MateriaSource::~MateriaSource()
{
    _release();
    std::cout << "Materia source has been deleted" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &m)
{
    if (this != &m)
    {
        _release();
        _size = m._size;
        _mats = new AMateria *[_size + 1];
        for (size_t i = 0; i < _size; ++i)
        {
            _mats[i] = m._mats[i]->clone();
        }
        _mats[_size] = 0;
    }
    std::cout << "Materia source has been copied" << std::endl;
    return *this;
}

void MateriaSource::learnMateria(const AMateria *a)
{
    if (a)
    {
        size_t newSize = _size + 1;
        AMateria **newMats = new AMateria *[newSize + 1];
        for (size_t i = 0; i < newSize; ++i)
        {
            if (_mats && _mats[i])
            {
                newMats[i] = _mats[i]->clone();
            }
        }
        newMats[_size] = a->clone();
        newMats[_size + 1] = 0;
        _release();
        _mats = newMats;
        _size = newSize;
        std::cout << "Materia source learned new materia of type "
                  << a->getType() << std::endl;
    }
}

AMateria *MateriaSource::createMateria(const std::string &m)
{
    AMateria *ret = 0;
    if (_size && _mats)
    {
        for (size_t i = 0; i < _size; ++i)
        {
            if (_mats[i]->getType() == m)
            {
                ret = _mats[i]->clone();
                std::cout << "Materia source created a new materia of type "
                          << _mats[i]->getType() << std::endl;
                break;
            }
        }
    }
    if (!ret)
    {
        std::cout << "Invalid materia " << m << std::endl;
    }
    return ret;
}

void MateriaSource::_release()
{
    if (_mats) {
        int i = 0;
        while (_mats[i])
        {
            delete _mats[i];
            _mats[i] = 0;
            ++i;
        }
        delete _mats[i];
        _mats[i] = 0;
        delete[] _mats;
        _mats = 0;
        _size = 0;
        std::cout << "Old materia source contents released" << std::endl;
    }
}
