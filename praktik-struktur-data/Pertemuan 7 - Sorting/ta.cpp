#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int Nilai[20] = {34, 12, 56, 78, 6, 43, 32, 20, 90, 50, 55, 75, 85, 95, 25}, temp, index = 0;
    bool tukar;

    cout << "\nData Sebelum Diurut = ";
    for (index = 0; index < 15; index++)
        cout << Nilai[index] << " ";

    cout << endl;

    // * Proses Pengurutan Metode Bubble Sort
    while (true)
    {
        tukar = false;
        for (index = 0; index < 14; index++)
        {
            if (Nilai[index] > Nilai[index + 1])
            {
                temp = Nilai[index + 1];
                Nilai[index + 1] = Nilai[index];
                Nilai[index] = temp;
                tukar = true;
            }
        }
        if (!tukar)
            break;
    }

    cout << "\nData Setelah Diurut = ";
    for (index = 0; index < 15; index++)
        cout << Nilai[index] << " ";

    getch();
}