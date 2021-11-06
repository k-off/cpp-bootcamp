/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 11:42:39 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 14:04:47 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d1("DT");
    std::cout << d1 << std::endl;
    d1.attack("Random trap");
    d1.takeDamage(5);
    d1.beRepaired(10);
    d1.highFiveGuys();
    d1.guardGate();
    return 0;
}