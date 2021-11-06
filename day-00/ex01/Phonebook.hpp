/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/16 10:58:51 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/16 16:04:11 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>

#include "Contact.hpp"

class Phonebook {
public:
    Phonebook();
    ~Phonebook();
    void manageInput();
private:
    void add();
    void search() const;
    void showAll() const;
    void showOne(const unsigned& id) const;
    unsigned currentContact;
    Contact contacts[8];
};