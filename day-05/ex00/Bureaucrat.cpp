/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 20:34:42 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/28 20:34:42 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;
}
