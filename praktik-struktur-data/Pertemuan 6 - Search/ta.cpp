#include <iostream>
#include <conio.h>
using namespace std;

void cariData(int dataArray[], int cariNilai)
{
    bool ketemu = false;
    int indexData[25], jumlahData = 0;
    cout << "Mencari angka " << cariNilai << "..." << endl;
    for (int index = 0; index < 25; index++)
    {
        if (dataArray[index] == cariNilai)
        {
            ketemu = true;
            indexData[jumlahData] = index;
            jumlahData++;
        }
    }

    if (ketemu)
    {
        cout << "Menemukan angka " << cariNilai << endl;
        cout << "Pada index = ";
        for (int index = 0; index < jumlahData; index++)
            cout << indexData[index] << " ";
        cout << "\numlah Data = " << jumlahData;
    }
    else
    {
        cout << "Maaf angka " << cariNilai << " tidak ditemukan";
    }
}

main()
{
    int dataArray[25] = {34, 8, 50, 74, 87, 90, 12, 25, 20, 30, 35, 45, 40, 22, 29, 72, 60, 55, 53, 12, 32, 33, 12, 41, 12};
    int pencarianData[3] = {12, 15, 37};

    for (int nilaiPencarianData : pencarianData)
    {
        cariData(dataArray, nilaiPencarianData);
        cout << endl;
        cout << endl;
    }

    getch();
}