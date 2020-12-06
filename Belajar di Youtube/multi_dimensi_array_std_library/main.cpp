#include <iostream>
#include <array>

const int panjangKolom = 3;
const int panjangBaris = 3;

void printArray(std::array<std::array<int, panjangKolom>, panjangBaris> &itemsArray)
{
    for (std::array<int, panjangKolom> vectorBaris : itemsArray)
    {
        for (int nilaiKolom : vectorBaris)
        {
            std::cout << nilaiKolom << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    std::array<std::array<int, panjangKolom>, panjangBaris> nilaiArray = {1, 2, 3, 4, 5, 6};

    printArray(nilaiArray);

    return 0;
}