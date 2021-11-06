/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 18:07:16 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/19 20:21:48 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Karen {
public:
    Karen();
    ~Karen();

    void complain(const std::string& level);
    
private:
    void debug();
    void info();
    void warning();
    void error();

    typedef void (Karen::*fp)();

    struct Lvl {
        std::string s;
        fp f;
    };
    // Lvl lvl[4];
    // std::string levelS;
    // Lvl lvl[4];
    // static void (Karen::*Karen::levelF[])();
};

// void (Karen::*Karen::levelF[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};