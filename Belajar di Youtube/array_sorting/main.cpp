#include <iostream>
#include <array>
#include <algorithm>

const size_t lengthArray = 10;

void printArray(std::array<int, lengthArray> &angka)
{
    for (int &a : angka)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

void printArray(std::array<char, lengthArray> &itemsArrayHuruf)
{
    for (char &huruf : itemsArrayHuruf)
    {
        std::cout << huruf << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::array<int, lengthArray> arrayAngka = {3, 2, 4, 1, 6, 5, 7, 10, 9, 8};

    std::array<char, lengthArray> arrayHuruf = {'i', 'h', 'a', 'h', 'p', 'm', 'd', 'z', 'r', 's'};

    printArray(arrayAngka);
    printArray(arrayHuruf);

    return 0;
}