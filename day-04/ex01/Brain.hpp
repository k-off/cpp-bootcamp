/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 15:19:17 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 15:53:07 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
public:
    Brain();
    Brain(const Brain &r);
    ~Brain();
    Brain &operator=(const Brain &r);
    std::string ideas[100];
};