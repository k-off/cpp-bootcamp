/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 20:14:56 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/28 21:36:19 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <sstream>
#include <iostream>
#include <exception>

class Bureaucrat;

class Form {
public:
    Form(const Form& f);
    Form(const std::string name, const int execGrade, const int signdGrade);
    ~Form();

    Form& operator=(const Form& f);

    bool getIsSigned() const;
    int getExecGrade() const;
    int getSignGrade() const;
    std::string getName() const;
    
    void getSigned(const Bureaucrat& b);
private:
    Form();
    bool _isSigned;
    const int _execGrade;
    const int _signGrade;
    const std::string _name;
    class GradeTooHighException : std::exception {
        public:
        virtual const char *what() const throw() {
            return "Highest grade is 1, received grade is too high";
        }
    };
    class GradeTooLowException : std::exception {
        public:
        virtual const char *what() const throw() {
            return "Lowest grade is 150, received grade is too low";
        }
    };
};

std::ostream &operator<<(std::ostream& os, const Form& f);