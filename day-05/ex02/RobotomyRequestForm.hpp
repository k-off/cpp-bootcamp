/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/30 12:38:56 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 12:52:57 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

#include <stdlib.h>
#include <time.h>

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
#include <exception>

class Bureaucrat;

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &r);
    ~RobotomyRequestForm();

    RobotomyRequestForm &operator=(const RobotomyRequestForm &r);

    void getExecuted(const Bureaucrat& b) const;
    std::string getTarget() const;
private:
    RobotomyRequestForm();
    std::string _target;
};

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &s);