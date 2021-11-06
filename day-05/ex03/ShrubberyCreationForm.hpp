/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/30 11:15:09 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 12:54:12 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <exception>

class Bureaucrat;

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &r);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &r);

    void getExecuted(const Bureaucrat& b) const;
    std::string getTarget() const;
private:
    ShrubberyCreationForm();
    std::string _target;
};

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &s);