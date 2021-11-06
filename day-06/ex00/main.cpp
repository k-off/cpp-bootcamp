/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/30 15:40:40 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/31 11:17:51 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <limits>
#include <float.h>
#include <math.h>

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

bool valid(const std::string &s) {
    int countS = 0, countM = 0, countDo = 0, countDi = 0, countF = 0;
    bool res = true;
    for (size_t i = 0; i < s.size(); ++i) {
        countS += (s[i] == ' ');
        countM += (s[i] == '-');
        countDo += (s[i] == '.');
        countDi += std::isdigit(s[i]);
        countF += (s[i] == 'f');
        if (countM > 1 || countDo > 1 || countF > 2) res = false;
        if (s[i] == ' ' && (countM || countDo || countDi || countF)) res = false;
        if (s[i] == '-' && (countDo || countDi || countF)) res = false;
        if (s[i] == 'f' && i < s.size() - 2) res = false;
    }
    if (countS + countM + countDo + countDi + countF < s.size()) res = false;
    return res;
}

void toChar(const double& d) {
    char c = 0;
    std::cout << "char: ";
    if (d > 31 && d < 127) {
        std::cout << "'" <<  static_cast<char>(d) << "'" << std::endl;
    } else  if (d > -129 && d < 128) {
        std::cout << "Non displayable" << std::endl;
    } else {
        std::cout << "impossible" << std::endl;
    }
}

void toInt(const double& d) {
    int i = 0;
    std::cout << "int: ";
    if (d >= std::numeric_limits<int>::min() && d <= std::numeric_limits<int>::max()) {
        std::cout << static_cast<int>(d) << std::endl;
    } else {
        std::cout << "impossible" << std::endl;
    }
}

void toFloat(const double& d, int precision) {
    float f = 0;
    std::cout << "float: " << std::fixed << std::setprecision(precision) << static_cast<float>(d) << "f" << std::endl;
}

void getDouble(const std::string &s, std::stringstream& ss) {
    double res = std::numeric_limits<double>::quiet_NaN();
    
    if (s.find("nan") < 1) {
        ;
    } else if (s.find("inf") < 1 || (s.find("inf") < 2 && s[0] == '-')) {
        res = (s[0] == '-' ? -1 : 1) * std::numeric_limits<double>::infinity();
    } else if (s.size() < 2 && (s[0] > 9 || s[0] < 0)) {
        char tmp;
        ss >> tmp;
        res = static_cast<double>(tmp);
    } else if (!valid(s)) {
        std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
        return ;
    } else {
        ss >> res;
    }
    int precision = 1;
    double delta = 0.0000001;
    double tmp = res;
    while (std::abs(tmp - std::round(tmp)) > delta) {
        ++precision;
        tmp *= 10;
        delta *= 10;
    } 
    toChar(res);
    toInt(res);
    toFloat(res, precision);
    std::cout << "double: " << std::fixed << std::setprecision(precision) << res << std::endl;
}

int main (int ac, char **av) {
    if (ac == 2) {
        std::string s(av[1]);
        std::stringstream ss(s);
        getDouble(s, ss);
    } else {
        std::cout << "Usage: ./basic_cast value" << std::endl;
    }
    return 0;
}