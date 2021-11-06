/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/19 18:07:32 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 13:35:46 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

/* *****************************************************************************
   PUBLIC MEMBER FUNCRIONS
***************************************************************************** */

Karen::Karen() {}

Karen::~Karen() {}

void Karen::complain(const std::string& level) {
    Lvl lvl[4] = { { "DEBUG", &Karen::debug }, { "INFO", &Karen::info }, 
     { "WARNING", &Karen::warning }, { "ERROR", &Karen::error } };
    for (int i = 0; i < 4; ++i) {
        if (lvl[i].s == level) {
            switch (i) {
                case 0: {
                    for(;i < 1; ++i)
                        (this->*lvl[i].f)();
                }
                case 1: {
                    for(;i < 2; ++i)
                        (this->*lvl[i].f)();
                }
                case 2: {
                    for(;i < 3; ++i)
                        (this->*lvl[i].f)();
                }
                case 3: {
                    for(;i < 4; ++i)
                        (this->*lvl[i].f)();
                }
            }
            break ;
        }
    }
}

/* *****************************************************************************
   !PUBLIC MEMBER FUNCRIONS
***************************************************************************** */

/* ****************************************************************************
   PRIVATE MEMBER FUNCRIONS
***************************************************************************** */

void Karen::debug() {
    std::cout << "DEBUG: complain" << std::endl;
}

void Karen::info() {
    std::cout << "INFO: complain" << std::endl;
}

void Karen::warning() {
    std::cout << "WARNING: complain" << std::endl;
}

void Karen::error() {
    std::cout << "ERROR: complain" << std::endl;
}

/* *****************************************************************************
   !PRIVATE MEMBER FUNCRIONS
***************************************************************************** */
