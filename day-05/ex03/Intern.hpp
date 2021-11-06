/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/30 13:14:53 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 14:52:42 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <exception>

class Form;

class Intern
{
public:
    Intern();
    Intern(const Intern &i);
    ~Intern();

    Intern &operator=(const Intern &i);

    Form *makeForm(const std::string &type, const std::string target) const;

private:
    struct AvailableFormDict {
        std::string s;
        Form *(Intern::*fp)(const std::string) const;
    };

    Form *makePForm(const std::string target) const;
    Form *makeRForm(const std::string target) const;
    Form *makeSForm(const std::string target) const;

    class UnknownForm : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Unknown form type.";
        }
    };
    
};