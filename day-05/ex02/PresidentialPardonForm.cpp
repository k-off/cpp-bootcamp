/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/30 13:03:32 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 13:09:27 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : Form("PresidentialPardonForm", 5, 25), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &r)
    : Form("PresidentialPardonForm", 5, 25), _target(r._target)
{
}

PresidentialPardonForm::PresidentialPardonForm()
    : Form("PresidentialPardonForm", 5, 25), _target("")
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &r)
{
    if (this != &r) _target = r._target;
    return *this;
}

void PresidentialPardonForm::getExecuted(const Bureaucrat& b) const
{
    execute(b);
    std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const {
    return _target;
}

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &s) {
    os  << "Concrete form '" << s.getName() << "' signing grade: " << s.getSignGrade()
        << ", execution grade: " << s.getExecGrade() << ", state: is"
        << (s.getIsSigned() ? "" : " not") << " signed, target: " << s.getTarget(); 
    return os;
}
