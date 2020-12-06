#include <iostream>

void printArray(int *, int baris, int kolom);

int main()
{
    // * array multi dimensi
    // ! int array[baris][kolom]

    // * Dia akan mengisi index kolom dulu baru kemudian mengisi baris. penjelasan : https://youtu.be/-hsKUD4fVRE

    const int baris = 2;
    const int kolom = 2;
    int array[baris][kolom] = {1, 2, 3, 4};

    std::cout << array[0][0] << " " << array[0][1] << std::endl;
    std::cout << array[1][0] << " " << array[1][1] << std::endl;

    printArray(*array, 2, 2);

    return 0;
}

void printArray(int *arrayPointer, int baris, int kolom)
{
    int index = 0;
    std::cout << std::endl;
    for (int indexBaris = 0; indexBaris < baris; indexBaris++)
    {
        for (int indexKolom = 0; indexKolom < kolom; indexKolom++)
        {
            std::cout << (index + 1) << " ";
            index++;
        }
        std::cout << std::endl;
    }
}