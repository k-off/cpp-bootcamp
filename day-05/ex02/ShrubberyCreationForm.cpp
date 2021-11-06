/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/30 11:29:33 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 13:07:25 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &r)
    : Form("ShrubberyCreationForm", 145, 137), _target(r._target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", 145, 137), _target("")
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &r)
{
    if (this != &r) _target = r._target;
    return *this;
}

void ShrubberyCreationForm::getExecuted(const Bureaucrat& b) const
{
    execute(b);
    std::ofstream of;
    std::string fname = _target+"_shrubbery";
    of.open(fname.c_str(), std::ios::out);
    of << " /|\\ \n /|\\ \n   L  \n";
    of.close();
}

std::string ShrubberyCreationForm::getTarget() const {
    return _target;
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &s) {
    os  << "Concrete form '" << s.getName() << "' signing grade: " << s.getSignGrade()
        << ", execution grade: " << s.getExecGrade() << ", state: is"
        << (s.getIsSigned() ? "" : " not") << " signed, target: " << s.getTarget(); 
    return os;
}
