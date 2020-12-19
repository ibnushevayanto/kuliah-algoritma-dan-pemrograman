#include <iostream>

int main()
{
    float a, b, hasil;
    char aritmatika;

    std::cout << "Input angka pertama : ";
    std::cin >> a;

    std::cout << "Input angka kedua : ";
    std::cin >> b;

    std::cout << "Operator yang digunakan(-,+,*,/) : ";
    std::cin >> aritmatika;

    std::cout << a << aritmatika << b << " = ";

    if (aritmatika == '+')
    {
        hasil = a + b;
    }
    else if (aritmatika == '-')
    {
        hasil = a - b;
    }
    else if (aritmatika == '*')
    {
        hasil = a * b;
    }
    else if (aritmatika == '/')
    {
        hasil = a / b;
    }
    else
    {
        hasil = 0;
    }

    std::cout << hasil;

    return 0;
}