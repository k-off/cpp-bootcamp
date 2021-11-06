/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 11:42:39 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 12:13:47 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap c1("Test Clap");
    std::cout << c1 << std::endl;
    c1.attack("Random trap");
    c1.takeDamage(5);
    c1.beRepaired(10);
    return 0;
}