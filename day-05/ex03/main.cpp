/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 20:35:21 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 14:53:15 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#define PRINT(x)                       \
    {                                  \
        std::cout << (x) << std::endl; \
    }

int main()
{
    try {
        Intern i;
        Form *p = i.makeForm("residential", "Bender");
        Form *r = i.makeForm("obotomy", "Bender");
        Form *s = i.makeForm("hrubbery", "Bender");
        Bureaucrat b("BUR", 1);
        b.signForm(*p);
        b.signForm(*r);
        b.signForm(*s);
        b.executeForm(*p);
        b.executeForm(*r);
        b.executeForm(*s);
        delete p;
        delete r;
        delete s;
        Form *t = i.makeForm("testform", "testname");
        b.executeForm(*t);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
