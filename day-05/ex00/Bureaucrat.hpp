/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 18:44:01 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/28 19:52:26 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Grade to high, highest grade is 1.";
        }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Grade to low, lowest grade is 150.";
        }
    };
    const std::string _name;
    int _grade;
    Bureaucrat();

public:
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &r);
    ~Bureaucrat();

    Bureaucrat &operator=(const Bureaucrat &r);

    std::string getName() const;
    int getGrade() const;
    void upGrade();
    void downGrade();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);