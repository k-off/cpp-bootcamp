/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 15:26:32 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 16:12:16 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
class Zombie {
public:
    Zombie();
    Zombie( const std::string& name );
    ~Zombie();

    Zombie& operator=( const Zombie& rhs );
    
    void    announce();
    void    setName( const std::string& name );
    Zombie* newZombie( const std::string& name );
    void    randomChump( const std::string& name );

private:
    std::string name_;
};