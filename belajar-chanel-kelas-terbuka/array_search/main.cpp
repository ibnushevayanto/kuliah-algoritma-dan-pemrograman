#include <iostream>
#include <array>
#include <algorithm>

const size_t maxLenghtArray = 10;

void printArray(std::array<int, maxLenghtArray> &angka)
{
    for (int &a : angka)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main () {
    std::array<int, maxLenghtArray> angka = {3, 2, 4, 1, 6, 5, 7, 10, 9, 8};
    
    int angkaYangDicari = 5;
    bool isKetemu;

    // sort dulu
    // search -> binary search

    std::sort(angka.begin(), angka.end());
    isKetemu = std::binary_search(angka.begin(), angka.end(), angkaYangDicari);

    std::cout << isKetemu;

    return 0;
}