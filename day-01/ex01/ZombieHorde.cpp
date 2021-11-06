/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 15:54:22 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 16:15:47 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( const int& n, const std::string& name) {
    Zombie *zombies = new Zombie[n];
    for (int i = 0; i < n; ++i) {
        zombies[i].setName(name);
    }
    return zombies;
}