/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 14:54:23 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 16:28:03 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *a = new Animal();
    Cat *c = new Cat();
    Dog *d = new Dog();
    WrongAnimal *wa = new WrongAnimal();
    WrongCat *wc = new WrongCat();

    std::cout << "'" << a->getType() << "'" << std::endl;
    std::cout << "'" << c->getType() << "'" << std::endl;
    std::cout << "'" << d->getType() << "'" << std::endl;
    std::cout << "'" << wa->getType() << "'" << std::endl;
    std::cout << "'" << wc->getType() << "'" << std::endl;

    a->makeSound();
    c->makeSound();
    d->makeSound();
    wa->makeSound();
    wc->makeSound();

    delete a;
    delete c;
    delete d;
    delete wa;
    delete wc;

    return 0;
}