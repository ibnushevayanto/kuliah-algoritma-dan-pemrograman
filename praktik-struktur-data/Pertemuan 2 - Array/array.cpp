#include <iostream>

int main()
{

    /**
     * Array Satu Dimensi
     */
    int array_satu_dimensi[4] = {1, 2, 3, 4};

    for (int nilai : array_satu_dimensi)
    {
        std::cout << nilai << std::endl;
    }

    /**
     * Array Dua Dimensi
     */
    int array_dua_dimensi[4][2] = {1, 2, 3, 4, 5, 6, 7, 8};

    for (int indexBaris = 0; indexBaris < 4; indexBaris++)
    {
        for (int indexKolom = 0; indexKolom < 2; indexKolom++)
        {
            std::cout << array_dua_dimensi[indexBaris][indexKolom] << std::endl;
        }
    }

    return 1;
}