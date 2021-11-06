/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: pacovali <pacovali@cstudent.codam.nl>        +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/31 20:09:58 by pacovali      #+#    #+#                 */
/*   Updated: 2021/10/31 20:47:32 by pacovali      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data
{
    char c;
    short s;
    int i;
    float f;
    double d;
    bool operator==(const Data& r) const {
        return c == r.c && s == r.s && i == r.i && f == r.f && d == r.d;
    }
};

uintptr_t serialize(Data *ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t ptr) {
    return reinterpret_cast<Data*>(ptr);
}

int main(void)
{
    Data d = {'c', 1, -1, 3.0f, 4.5};
    uintptr_t ser1 = serialize(&d);
    Data* des1 = deserialize(ser1);
    uintptr_t ser2 = serialize(des1);
    Data* des2 = deserialize(ser2);
    std::cout << "d " << (d == *des1 ? "==" : "!=") << " des1 ";
    std::cout << (d == *des2 ? "==" : "!=") << " des2" << std::endl;
    return 0;
}