/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/24 09:41:19 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/24 14:28:18 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void testFunction() {
    IMateriaSource *src = new MateriaSource();
    Ice i;
    Cure c;
    AMateria *ip = new Ice();
    AMateria *cp = new Cure();
    src->learnMateria(ip);
    src->learnMateria(cp);
    src->learnMateria(&i);
    src->learnMateria(&c);

    ICharacter *me = new Character("me");
    AMateria *tmp = src->createMateria("ice");
    me->equip(tmp);
    delete tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    delete tmp;
    me->equip(&i);
    me->unequip(0);

    delete ip;
    delete cp;
    delete src;
    delete me;
}

int main()
{
    testFunction();
    return 0;
}