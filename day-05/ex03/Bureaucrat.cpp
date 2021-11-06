/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 20:34:32 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 14:24:33 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
    if (grade < 1)
    {
        throw GradeTooHighException();
    }
    if (grade > 150)
    {
        throw GradeTooLowException();
    }
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &r) : _name(r._name)
{
    if (r._grade < 1)
    {
        throw GradeTooHighException();
    }
    if (r._grade > 150)
    {
        throw GradeTooLowException();
    }
    _grade = r._grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &r)
{
    if (this != &r)
    {
        _grade = r._grade;
    }
    return *this;
}

std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::upGrade()
{
    if (_grade < 2)
    {
        throw GradeTooHighException();
    }
    --_grade;
}

void Bureaucrat::downGrade()
{
    if (_grade > 149)
    {
        throw GradeTooLowException();
    }
    ++_grade;
}

void Bureaucrat::signForm(Form& f) const {
    if (f.getSignGrade() >= _grade) {
        std::cout << _name << " signs " << f.getName() << std::endl;
        f.getSigned(*this);
    } else {
        std::cout << _name << " can not sign '" << f.getName() 
            << "' because form grade is too high." << std::endl;
    }
}

void Bureaucrat::executeForm(const Form& f) const {
    if (!f.getIsSigned()) {
        throw IsNotSignedException();
    } else {
        std::cout << _name << " executes form " << f.getName() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;
}
