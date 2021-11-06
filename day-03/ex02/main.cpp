/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 11:42:39 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 13:39:45 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap f1("ST");
    std::cout << f1 << std::endl;
    f1.attack("Random trap");
    f1.takeDamage(5);
    f1.beRepaired(10);
    f1.highFiveGuys();
    return 0;
}