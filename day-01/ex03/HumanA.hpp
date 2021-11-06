/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 16:37:58 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 17:05:20 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

#include <string>

class HumanA {
public:
    HumanA( const std::string& name, const Weapon& w);
    ~HumanA();

    HumanA& operator=(const HumanA& rhs);
    
    void attack() const ;
private:
    std::string name_;
    Weapon w_;
};
