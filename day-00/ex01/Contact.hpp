/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/16 14:56:37 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/16 16:33:07 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>

class Contact {
public:
    Contact();
    ~Contact();
    void checkEmpty();
    bool getEmpty() const;
    void printShort() const;
    std::string getFirst() const;
    std::string getLast() const;
    std::string getNick() const;
    std::string getSecret() const;
    std::string& setFirst();
    std::string& setLast();
    std::string& setNick();
    std::string& setSecret();
private:
    bool isEmpty;
    std::string first;
    std::string last;
    std::string nick;
    std::string secret;

};

std::istream& operator>>(std::istream& is, Contact& rhs);
std::ostream& operator<<(std::ostream& os, const Contact& rhs);

