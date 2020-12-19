#include <iostream>

int main()
{
    int arrayNilai[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int nilai : arrayNilai)
    {
        std::cout << "address " << &nilai << " nilai : " << nilai << std::endl;
    }

    std::cout << std::endl;

    for (int &nilai : arrayNilai)
    {
        nilai *= 2;
    }

    for (int &nilai : arrayNilai)
    {
        std::cout << "address " << &nilai << " nilai : " << nilai << std::endl;
    }

    return 0;
}