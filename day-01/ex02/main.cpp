/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 15:07:47 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 16:31:50 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;
    std::cout << "String address          : " << std::hex << &s << std::endl;
    std::cout << "String address using PTR: " << std::hex << stringPTR << std::endl;
    std::cout << "String address using REF: " << std::hex << &stringREF << std::endl;

    std::cout << "Sting value             : '" << *stringPTR << "'" << std::endl;
    std::cout << "Sting value using PTR   : '" << *stringPTR << "'" << std::endl;
    std::cout << "Sting value using REF   : '" << stringREF << "'" << std::endl;
    return 0;
}
