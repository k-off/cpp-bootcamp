/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 11:42:39 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 13:30:01 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap s1("ST");
    std::cout << s1 << std::endl;
    s1.attack("Random trap");
    s1.takeDamage(5);
    s1.beRepaired(10);
    s1.guardGate();
    return 0;
}