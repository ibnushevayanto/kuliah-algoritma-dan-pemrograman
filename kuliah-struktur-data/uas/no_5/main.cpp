#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

const int lengthArray = 20;

void printArray(std::array<int, lengthArray> &angka)
{
    for (int &a : angka)
    {
        std::cout << a << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::array<int, lengthArray> angka = {40, 14, 50, 10, 19, 45, 80, 12, 16, 42, 46, 60, 200, 11, 15, 17, 44, 55, 70};
    int command;

    std::cout << "\nData = {40, 14, 50, 10, 19, 45, 80, 12, 16, 42, 46, 60, 200, 11, 15, 17, 44, 55, 70}" << std::endl;

    std::cout << "\n1. Urutkan secara ascending"
              << "\n2. Urutkan secara descending"
              << "\n3. Exit \n\n";

    while (true)
    {
        std::cout << "\nMasukkan Perintah : ";
        std::cin >> command;
        std::cin.ignore();

        if (command == 1)
        {
            std::sort(angka.begin(), angka.end());
            printArray(angka);
        }
        else if (command == 2)
        {
            std::sort(angka.begin(), angka.begin() + lengthArray, greater<int>());
            printArray(angka);
        }
        else if (command == 3)
        {
            std::cout << "Proses keluar dari aplikasi";
            break;
        }
        else
        {
            std::cout << "Perintah anda tidak dikenal !!! (automatis keluar aplikasi)";
            break;
        }
    }

    return 0;
}