#include <iostream>
#include <conio.h>
using namespace std;

void inputData(int *Data, int jumlahData, int &index)
{
    for (index = 0; index < jumlahData; index++)
    {
        cout << "Data index ke-" << index << " = ";
        cin >> *(Data + index);
    }
}

void sortingData(int *Data, int jumlahData, int &index)
{
    int temp;
    for (index = 0; index < jumlahData; index++)
    {
        for (int j = 0; j < jumlahData; j++)
        {
            if (*(Data + index) < *(Data + j))
            {
                temp = *(Data + index);
                *(Data + index) = *(Data + j);
                *(Data + j) = temp;
            }
        }
    }
}

void tampilData(int *Data, int jumlahData, int &index)
{
    for (int i = 0; i < jumlahData; i++)
    {
        cout << *(Data + i) << " ";
    }
}

main()
{
    int Data[20], jumlahData, keyword, angkaTengah, index = 0;
    bool ketemu;

    cout << "Jumlah Data Angka Yang Ingi Diinput = ";
    cin >> jumlahData;

    if (jumlahData > 20)
        jumlahData = 20;

    cout << "\nInput Data : \n";
    inputData(Data, jumlahData, index);

    cout << "\nData sebelum disorting = ";
    tampilData(Data, jumlahData, index);

    sortingData(Data, jumlahData, index);
    cout << "\nData setelah disorting = ";
    tampilData(Data, jumlahData, index);

    cout << "\n\nKeyword angka yang dicari = ";
    cin >> keyword;

    angkaTengah = jumlahData / 2;

    if (Data[angkaTengah] < keyword)
    {
        for (index = angkaTengah; index < jumlahData; index++)
        {
            if (Data[index] == keyword)
            {
                ketemu = true;
                break;
            }
        }
    }
    else
    {
        for (index = angkaTengah; index > jumlahData; index--)
        {
            if (Data[index] == keyword)
            {
                ketemu = true;
                break;
            }
        }
    }

    if (ketemu)
    {
        cout << "\nData " << keyword << " ketemu di index-" << index;
    }
    else
    {
        cout << "\nData " << keyword << " tidak ditemukan";
    }

    getch();
}