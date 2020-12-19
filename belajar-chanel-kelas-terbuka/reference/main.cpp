#include <iostream>

int main()
{
    int a = 5;

    std::cout << "Nilai dari a = " << a << std::endl;
    std::cout << "Address dari a = " << &a << std::endl
              << std::endl;

    // reference

    int &b = a;

    std::cout << "Nilai dari b = " << b << std::endl;
    std::cout << "Address dari b = " << &b << std::endl
              << std::endl;

    a = 10;

    std::cout << "Nilai dari a = " << a << std::endl;
    std::cout << "Nilai dari b = " << b << std::endl
              << std::endl;

    b = 50;

    std::cout << "Nilai dari a = " << a << std::endl;
    std::cout << "Nilai dari b = " << b << std::endl
              << std::endl;

    return 0;
}