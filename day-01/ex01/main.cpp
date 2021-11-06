/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 15:07:47 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 16:15:07 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int main() {
    int n = 10;
    std::string name = "zombie";
    Zombie *z = zombieHorde(n, name);
    for ( int i = 0; i < n; ++i) {
        z[i].announce();
    }
    delete [] z;
    return 0;
}