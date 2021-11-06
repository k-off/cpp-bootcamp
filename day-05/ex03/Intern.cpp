/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/30 13:22:14 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 14:52:56 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <stdio.h>

Intern::Intern()
{
}

Intern::Intern(const Intern &i)
{
    if (this != &i)
    {
        ;
    }
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &i)
{
    if (this != &i)
    {
        ;
    }
    return *this;
}

Form *Intern::makeForm(const std::string &type, const std::string target) const
{
    AvailableFormDict f[] = {
        {"hrubbery", &Intern::makePForm},
        {"obotomy", &Intern::makeRForm},
        {"residential", &Intern::makeSForm}};
    for (size_t i = 0; i < sizeof(f) / sizeof(AvailableFormDict); ++i)
    {
        if (type.find(f[i].s) != std::string::npos)
        {
            return (this->*f[i].fp)(target); // to avoid 'this', form creation member functions must be static
        }
    }
    throw UnknownForm();
    return NULL;
}

Form *Intern::makePForm(const std::string target) const
{
    return new ShrubberyCreationForm(target);
}

Form *Intern::makeRForm(const std::string target) const
{
    return new RobotomyRequestForm(target);
}

Form *Intern::makeSForm(const std::string target) const
{
    return new PresidentialPardonForm(target);
}