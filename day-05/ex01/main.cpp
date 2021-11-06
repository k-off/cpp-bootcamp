/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/28 20:35:21 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/30 11:31:00 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#define PRINT(x)                       \
    {                                  \
        std::cout << (x) << std::endl; \
    }

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string name(av[1]);
        std::stringstream ss(av[2]);
        int grade;
        ss >> grade;
        try
        {
        }
        catch (std::exception &e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    else
    {
        std::cerr << "Usage: ./form name sign_grade exec_grade" << std::endl;
    }
    return 0;
}
