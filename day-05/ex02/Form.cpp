/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 20:36:38 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 14:23:49 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
    : _isSigned(false), _execGrade(0), _signGrade(0), _name("")
{
    throw GradeTooHighException();
}

Form::Form(const Form &f)
    : _isSigned(f._isSigned), _execGrade(f._execGrade), _signGrade(f._signGrade), _name(f._name)
{
    if (_execGrade < 1)
    {
        throw GradeTooHighException();
    }
    if (_signGrade < 1)
    {
        throw GradeTooHighException();
    }
    if (_execGrade > 150)
    {
        throw GradeTooLowException();
    }
    if (_signGrade > 150)
    {
        throw GradeTooLowException();
    }
}

Form::Form(const std::string name, const int execGrade, const int signdGrade)
    : _isSigned(false), _execGrade(execGrade), _signGrade(signdGrade), _name(name)
{
    if (_execGrade < 1)
    {
        throw GradeTooHighException();
    }
    if (_signGrade < 1)
    {
        throw GradeTooHighException();
    }
    if (_execGrade > 150)
    {
        throw GradeTooLowException();
    }
    if (_signGrade > 150)
    {
        throw GradeTooLowException();
    }
}

Form::~Form()
{
}

Form &Form::operator=(const Form &f)
{
    if (this != &f)
    {
        _isSigned = f._isSigned;
        if (f._execGrade < 1)
        {
            throw GradeTooHighException();
        }
        if (f._signGrade < 1)
        {
            throw GradeTooHighException();
        }
        if (f._execGrade > 150)
        {
            throw GradeTooLowException();
        }
        if (f._signGrade > 150)
        {
            throw GradeTooLowException();
        }
    }
    return *this;
}

bool Form::getIsSigned() const
{
    return _isSigned;
}

int Form::getExecGrade() const
{
    return _execGrade;
}

int Form::getSignGrade() const
{
    return _signGrade;
}

std::string Form::getName() const
{
    return _name;
}

void Form::getSigned(const Bureaucrat &b)
{
    if (b.getGrade() > _signGrade)
    {
        throw GradeTooLowException();
    }
    _isSigned = true;
}

void Form::execute(const Bureaucrat &b) const
{
    if (b.getGrade() > _execGrade)
    {
        throw GradeTooLowException();
    }
    else
    {
        b.executeForm(*this);
    }
}

std::ostream &operator<<(std::ostream &os, const Form &f)
{
    os << "Form '" << f.getName() << "' is " << (f.getIsSigned() ? "" : "not");
    os << " signed, singinng grade: " << f.getSignGrade();
    os << ", execution grade: " << f.getExecGrade();
    return os;
}