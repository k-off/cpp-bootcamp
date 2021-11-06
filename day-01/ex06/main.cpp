/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 16:34:04 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/19 20:06:43 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Karen.hpp"

int main() {
    Karen k;
    std::cout << " ===== TRY DEBUG ===== " << std::endl;
    k.complain("DEBUG");
    std::cout << " ===== TRY INFO ===== " << std::endl;
    k.complain("INFO");
    std::cout << " ===== TRY WARNING ===== " << std::endl;
    k.complain("WARNING");
    std::cout << " ===== TRY ERROR ===== " << std::endl;
    k.complain("ERROR");
    return 0;
}
