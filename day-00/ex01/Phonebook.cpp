/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/16 10:58:31 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/16 16:52:21 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() {
    currentContact = 0;

}

Phonebook::~Phonebook() {
    currentContact = 0;
}

void Phonebook::manageInput() {
    std::string uinput = "";
    while (uinput != "EXIT") {
        std::cout << "Enter a command (ADD/SEARCH/EXIT): ";
        std::cin >> uinput;
        if (uinput == "ADD") add();
        if (uinput == "SEARCH") search();
    }
}

void Phonebook::add() {
    std::cin >> contacts[currentContact];
    currentContact = (currentContact + !contacts[currentContact].getEmpty()) % 8;
}

void Phonebook::showAll() const {
    std::cout << "/----------/----------/----------/----------/" << std::endl;
    std::cout << "|    id    | F. Name  | L. Name  | Nick-Name|" << std::endl;
    std::cout << "/----------/----------/----------/----------/" << std::endl;
    for (int i = 0; i < 8; ++i) {
        if (!contacts[i].getEmpty()) {
            std::cout << "|" << std::setw(10) << i + 1 << "|";
            contacts[i].printShort();
        }
    }
    std::cout << "/----------/----------/----------/----------/" << std::endl;
}

void Phonebook::showOne(const unsigned& id) const {
    std::cout << contacts[id] << std::endl;
}

void Phonebook::search() const {
    showAll();
    while (1) {
        std::string s;
        if (contacts[0].getEmpty() && currentContact == 0) {
            std::cout << "Phone book was not used yet. Nothing to display" << std::endl;
            break ;
        }
        std::cout << "Choose contact index to display (1-8): ";
        std::cin >> s;
        if (s.size() == 1 && std::isdigit(s[0])) {
            showOne(static_cast<unsigned>(s[0] - '1'));
            break;
        } else if (s == "EXIT") {
            std::exit(0);
        } else {
            break ;
        }
    }
}
