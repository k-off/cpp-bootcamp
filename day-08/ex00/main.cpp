/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/03 20:14:57 by pacovali      #+#    #+#                 */
/*   Updated: 2021/11/03 20:50:10 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>

int main() {
    std::vector<int> v(5);
    std::cout << easyfind(v, 0) << std::endl;
    std::cout << easyfind(v, 1) << std::endl;
    return 0;
}