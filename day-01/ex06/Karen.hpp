/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 18:07:16 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 14:07:01 by pacovali      ########   odam.nl         */
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
};
