/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 15:07:47 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 15:50:51 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie z1;
    z1.setName( "z1" );
    Zombie* z2 = z1.newZombie( "z2" );
    z2->randomChump( "z3" );
    delete(z2);
    return 0;
}