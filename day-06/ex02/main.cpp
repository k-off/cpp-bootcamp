/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/31 20:09:58 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/31 21:29:26 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <random>
#include <ctime>

Base *generate()
{
    Base *ret = NULL;
    std::srand(time(0));
    int i = std::rand() % 3;
    std::cout << "Random index: " << i << std::endl;
    switch (i)
    {
        case 0:
            std::cout << "Generating A" << std::endl;
            ret = new A;
            break ;
        case 1:
            std::cout << "Generating B" << std::endl;
            ret = new B;
            break ;
        case 2:
            std::cout << "Generating C" << std::endl;
            ret = new C;
            break ;
    }
    return ret;
}

void identify(Base *base)
{
    A *a = dynamic_cast<A *>(base);
    B *b = dynamic_cast<B *>(base);
    C *c = dynamic_cast<C *>(base);
    std::cout << (a ? "A" : "") << (b ? "B" : "") << (c ? "C" : "") << std::endl;
}

void identify(Base &base)
{
    try
    {
        A a = dynamic_cast<A &>(base);
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast &e) { }
    try
    {
        B b = dynamic_cast<B &>(base);
        std::cout << "B" << std::endl;
    }
    catch (std::bad_cast &e) { }
    try
    {
        C c = dynamic_cast<C &>(base);
        std::cout << "C" << std::endl;
    }
    catch (std::bad_cast &e) { }
}

int main(void)
{
    Base *b = generate();
    std::cout << "By pointer:" << std::endl;
    identify(b);
    std::cout << "By reference:" << std::endl;
    identify(*b);
    return 0;
}