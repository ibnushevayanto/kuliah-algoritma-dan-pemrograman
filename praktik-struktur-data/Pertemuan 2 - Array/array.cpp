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

    /**
     * Array Tiga Dimensi
     */
    int tabel[2][4][2] = {{{1, 2}, {3, 4}, {5, 6}, {7, 8}}, {{9, 10}, {11, 12}, {13, 14}, {15, 16}}};

    for (int indexBaris = 0; indexBaris < 2; indexBaris++)
    {
        for (int indexKolom = 0; indexKolom < 4; indexKolom++)
        {
            for (int indexDalam = 0; indexDalam < 2; indexDalam++)
            {
                std::cout << tabel[indexBaris][indexKolom][indexDalam] << std::endl;
            }
        }
    }
    return 1;
}