#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int Nilai[10];
    int i, Jumlah = 0;
    float Rata_Rata;

    // membaca dan menghitung jumlah
    for (i = 0; i < 10; i++)
    {
        cout << "Masukkan Elemen ke-" << i << " = ";
        cin >> Nilai[i];
        Jumlah += Nilai[i];
    }

    Rata_Rata = (float)Jumlah / 10;

    // mencetak Elemen Array
    cout << "\n\nDeretan Bilangan = ";

    for (i = 0; i < 10; i++)
    {
        cout << Nilai[i] << " ";
    }

    // mencetak harga jumlah
    cout << "\nJumlah Bilangan = " << Jumlah;
    cout << "\nRata Rata Bilangan = " << Rata_Rata;
    getch();
}