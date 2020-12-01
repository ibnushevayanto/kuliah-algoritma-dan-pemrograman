#include <iostream>

int main()
{
    int n;

    std::cout << "Masukkan panjang pola: ";
    std::cin >> n;

    std::cout << "Pola 5\n";

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            std::cout << " ";
        }
        for (int k = 0; k <= (2 * i - 1); k++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}