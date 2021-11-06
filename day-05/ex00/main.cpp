/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 19:39:20 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/28 20:13:00 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define PRINT(x) { std::cout << (x) << std::endl; }

int main(int ac, char **av) {
    if (ac == 3) {
        std::string name(av[1]);
        std::stringstream ss(av[2]);
        int grade;
        ss >> grade;
        try {
            Bureaucrat b1(name, grade);
            PRINT(b1);
            b1.upGrade();
            PRINT(b1); 
            b1.downGrade();
            PRINT(b1);
            b1.downGrade();
            PRINT(b1);
        } catch  (std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    } else {
        std::cerr << "Usage: ./bureaucrat name grade" << std::endl;
    }
    return 0;
}
