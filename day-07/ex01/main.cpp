/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/02 18:28:42 by pacovali      #+#    #+#                 */
/*   Updated: 2021/11/02 21:34:59 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#include <iostream>

int main()
{
    char c[] = {'0', '1', '2', '3', '4', '5', '6'};

    std::cout << "int  : ";
    iter(c, sizeof(c) / sizeof(char), print<int>);
    std::cout << std::endl;
    std::cout << "float: ";
    iter(c, sizeof(c) / sizeof(char), print<float>);
    std::cout << std::endl;
    std::cout << "char : ";
    iter(c, sizeof(c) / sizeof(char), print<char>);
    std::cout << std::endl;
    return 0;
}