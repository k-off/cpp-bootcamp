/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/23 15:21:31 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/23 15:53:10 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::string s = "aa";
    for (int i = 0; i < 10; ++i)
    {
        s[0] = 'a' + i;
        for (int j = 0; j < 10; ++j)
        {
            s[1] = 'a' + j;
            ideas[i * 10 + j] = s;
        }
    }
    std::cout << "A Brain constructed" << std::endl;
}

Brain::Brain(const Brain &r)
{
    *this = r;
    std::cout << "A Brain copied" << std::endl;
}

Brain::~Brain()
{
    std::cout << "A Brain destructed" << std::endl;
}

Brain &Brain::operator=(const Brain &r)
{
    if (this != &r)
    {
        for (int i = 0; i < 100; ++i)
        {
            ideas[i] = r.ideas[i];
        }
    }
    std::cout << "Ideas copied" << std::endl;
    return *this;
}
