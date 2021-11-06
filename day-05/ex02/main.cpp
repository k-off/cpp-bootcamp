/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 20:35:21 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 13:08:13 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define PRINT(x)                       \
    {                                  \
        std::cout << (x) << std::endl; \
    }

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "usage: ./concrete_forms target_name" << std::endl;
        return 1;
    }
    Bureaucrat b("Bur", 1);
    std::cout << b << std::endl;
    ShrubberyCreationForm s(av[1]);
    std::cout << s << std::endl;
    s.getSigned(b);
    s.getExecuted(b);
    RobotomyRequestForm r(av[1]);
    std::cout << r << std::endl;
    r.getSigned(b);
    r.getExecuted(b);
    PresidentialPardonForm p(av[1]);
    p.getSigned(b);
    p.getExecuted(b);
    return 0;
}
