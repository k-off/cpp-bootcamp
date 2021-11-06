/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:54:23 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 16:41:44 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    int amount = 10;
    Animal *a[amount];

    for (int i = 0; i < amount; ++i) {
        if (i%2) {
            a[i] = new Cat();
        } else {
            a[i] = new Dog();
        }
    }
    
    *dynamic_cast<Cat*>(a[1]) = *dynamic_cast<Cat*>(a[3]);
    *dynamic_cast<Dog*>(a[0]) = *dynamic_cast<Dog*>(a[2]);

    for (int i = 0; i < amount; ++i) {
        delete a[i];
    }
    return 0;
}
