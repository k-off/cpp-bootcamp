/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/16 14:55:59 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/16 16:45:20 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
    isEmpty = true;
}

Contact::~Contact() {

}

void Contact::checkEmpty() {
    isEmpty = !(first.size() || last.size() || nick.size() || secret.size());
}

bool Contact::getEmpty() const {
    return isEmpty;
}

std::string Contact::getFirst() const { return first; }

std::string Contact::getLast() const { return last; }

std::string Contact::getNick() const { return nick; }

std::string Contact::getSecret() const { return secret; }

std::string& Contact::setFirst() { return first; }

std::string& Contact::setLast() { return last; }

std::string& Contact::setNick() { return nick; }

std::string& Contact::setSecret() { return secret; }


void Contact::printShort() const {
    std::cout << std::right;
    std::cout << std::setw(10) << (first.size() < 11 ? first : first.substr(0, 9));
    std::cout << (first.size() < 11 ? "" : ".") << "|";
    std::cout << std::setw(10) << (last.size() < 11 ? last : last.substr(0, 9));
    std::cout << (last.size() < 11 ? "" : ".") << "|";
    std::cout << std::setw(10) << (nick.size() < 11 ? nick : nick.substr(0, 9));
    std::cout << (nick.size() < 11 ? "" : ".") << "|";
    std::cout << std::endl;
    std::cout << std::internal;
}

std::istream& operator>>(std::istream& is, Contact& rhs) {
    std::cout << "Type First name: ";
    std::cin >> rhs.setFirst();
    if (rhs.getFirst() == "EXIT") std::exit(0);
    std::cout << "Type Last name : ";
    std::cin >> rhs.setLast();
    if (rhs.getLast() == "EXIT") std::exit(0);
    std::cout << "Type Nick-name : ";
    std::cin >> rhs.setNick();
    if (rhs.getNick() == "EXIT") std::exit(0);
    std::cout << "Type Secret    : ";
    std::cin >> rhs.setSecret();
    if (rhs.getSecret() == "EXIT") std::exit(0);
    rhs.checkEmpty();
    return is;
}

std::ostream& operator<<(std::ostream& os, const Contact& rhs) {
    if (!rhs.getEmpty()) {
        std::cout << "First name: " << rhs.getFirst() << std::endl;
        std::cout << "Last name : " << rhs.getLast() << std::endl;
        std::cout << "Nick-name : " << rhs.getNick() << std::endl;
        std::cout << "Secret    : " << rhs.getSecret() << std::endl;
    }
    return os;
}