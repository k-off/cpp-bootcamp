/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/30 13:03:23 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 13:09:37 by pacovali      ########   odam.nl         */
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

class PresidentialPardonForm : public Form
{
public:
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &r);
    ~PresidentialPardonForm();

    PresidentialPardonForm &operator=(const PresidentialPardonForm &r);

    void getExecuted(const Bureaucrat& b) const;
    std::string getTarget() const;
private:
    PresidentialPardonForm();
    std::string _target;
};

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &s);