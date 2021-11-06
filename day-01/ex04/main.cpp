/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@codam.student.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/17 16:34:04 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/17 22:58:56 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

std::string replace(std::string& srcS, const std::string& oldS, 
    const std::string& newS) {
    std::string ret("");
    while (srcS.size()) {
        size_t pos = srcS.find(oldS);
        if (pos == std::string::npos) {
            ret += srcS;
            srcS = "";
        } else {
            std::string tmp = srcS.substr(0, srcS.find(oldS));
            ret += tmp;
            srcS = srcS.substr(tmp.size(), srcS.size());
            ret += newS;
            srcS = srcS.substr(newS.size(), srcS.size());
        }
    }
    return ret;
}

int main(int ac, char **av) {
    if (ac == 4) {
        std::string oldF(av[1]);
        std::string newF = oldF + ".replace";
        std::string oldS(av[2]);
        std::string newS(av[3]);
        if (oldS.size() && newS.size()) {
            std::ifstream oldFS(oldF.c_str(), std::ifstream::in);
            std::ofstream newFS(newF.c_str(), std::ofstream::out| std::ofstream::app);
            std::string src("");
            while (!oldFS.eof()) {
                std::string buf(4096, '\0');
                if (src.size() >= buf.size()) {
                    src.append("\n");
                }
                oldFS.read(&buf[0], buf.size());
                src.append(&buf[0]);
            }
            if (oldS != newS) {
                src = replace(src, oldS, newS);
                oldFS.close();
            }
            newFS << src;
            newFS.close();
        } else {
            std::cout << "Error: old string and new string must be non-empty" << std::endl;
        }
    } else {
        std::cout << "Usage: replace filename \"initial-string\" \"replace-with-string\"" << std::endl;
    }
    return 0;
}
