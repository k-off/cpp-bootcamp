/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 16:37:01 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 17:05:25 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Weapon {
public:
    Weapon();
    Weapon( const std::string& type );
    ~Weapon();

    Weapon& operator=(const Weapon& rhs);
    
    void setType(const std::string& type);
    const std::string& getType() const;

private:
    std::string type_;
};
