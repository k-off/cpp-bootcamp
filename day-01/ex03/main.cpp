/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 16:34:04 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 17:18:02 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

#include <string>
#include <iostream>

int main() {
    Weapon wa("a");
    Weapon wb("b");
    HumanA a("A", wa);
    HumanB b("B");
    a.attack();
    b.attack();
    b.setWeapon(wb);
    b.attack();
    return 0;
}
