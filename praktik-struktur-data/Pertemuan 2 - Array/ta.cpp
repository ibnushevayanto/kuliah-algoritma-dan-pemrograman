#include <iostream>
#include <conio.h>

main()
{
    const int barisMatriks = 2;
    const int kolomMatriks = 2;

    int matriks1[barisMatriks][kolomMatriks] = {10, 11, 12, 13};
    int matriks2[barisMatriks][kolomMatriks] = {20, 21, 22, 23};
    int matriks_hasil[barisMatriks][kolomMatriks];

    // * Menjumlahkan Matriks
    for (int indexBarisMatriks = 0; indexBarisMatriks < barisMatriks; indexBarisMatriks++)
    {
        for (int indexKolomMatriks = 0; indexKolomMatriks < kolomMatriks; indexKolomMatriks++)
        {
            matriks_hasil[indexBarisMatriks][indexKolomMatriks] = matriks1[indexBarisMatriks][indexKolomMatriks] + matriks2[indexBarisMatriks][indexKolomMatriks];
        }
    }

    // * Menampilkan Hasil Matriks
    for (int indexBarisMatriks = 0; indexBarisMatriks < barisMatriks; indexBarisMatriks++)
    {
        for (int indexKolomMatriks = 0; indexKolomMatriks < kolomMatriks; indexKolomMatriks++)
        {
            std::cout << matriks_hasil[indexBarisMatriks][indexKolomMatriks] << " ";
        }
        std::cout << std::endl;
    }

    getch();
}