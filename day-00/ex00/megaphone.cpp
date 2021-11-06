/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/16 10:20:06 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/16 10:57:13 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int ac, char **av) {
    if (ac < 2) {
        std::cout << "* LOUD AND UNBEARABLE NOISE *";
    } else {
        for (int i = 1; i < ac; ++i) {
            std::string s(av[i]);
            for (size_t j = 0; j < s.size(); ++j) {
                if (s[j] <= 'z' && s[j] >= 'a') {
                    s[j] = s[j] - 32;
                }
            }
            std::cout << s;
        }
    }
    std::cout << std::endl;
    return 0;
}
