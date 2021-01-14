#include <iostream>

union data
{
    int a;
    char b[4];
};

int main()
{
    data data_union;

    data_union.a = 12345642;
    std::cout << "data a : " << data_union.a << std::endl;
    std::cout << "data b : " << data_union.b << std::endl;

    data_union.b[0] = 'a';
    data_union.b[1] = 'b';
    data_union.b[2] = 'c';
    data_union.b[3] = 'd';

    std::cout << "data b : " << data_union.b << std::endl;

    return 0;
}