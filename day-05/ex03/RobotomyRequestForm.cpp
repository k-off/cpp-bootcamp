/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/30 12:39:04 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 13:06:56 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : Form("RobotomyRequestForm", 45, 72), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &r)
    : Form("RobotomyRequestForm", 45, 72), _target(r._target)
{
}

RobotomyRequestForm::RobotomyRequestForm()
    : Form("RobotomyRequestForm", 45, 72), _target("")
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &r)
{
    if (this != &r) _target = r._target;
    return *this;
}

void RobotomyRequestForm::getExecuted(const Bureaucrat& b) const
{
    execute(b);
    std::cout << "Drilling noises... ";
    srand(time(NULL));
    if (rand()%2) {
        std::cout << _target << " has been robotomized successfully" << std::endl;
    } else {
        std::cout << "failure" << std::endl;
    }
}

std::string RobotomyRequestForm::getTarget() const {
    return _target;
}

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &s) {
    os  << "Concrete form '" << s.getName() << "' signing grade: " << s.getSignGrade()
        << ", execution grade: " << s.getExecGrade() << ", state: is"
        << (s.getIsSigned() ? "" : " not") << " signed, target: " << s.getTarget(); 
    return os;
}
