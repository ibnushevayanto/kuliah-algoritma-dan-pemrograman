#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int Nilai[20];
    int Posisi[20];
    int i, N, Bilangan, Banyak = 0;
    bool ketemu;

    cout << "Masukkan banyaknya bilangan = ";
    cin >> N;
    cout << endl;
    for (i = 0; i < N; i++)
    {
        cout << "Masukkakn elemen ke-" << i << "=";
        cin >> Nilai[i];
    }

    cout << "Masukkan bilangan yang akan dicabut =";
    cin >> Bilangan;
    for (i = 0; i < N; i++)
    {
        if (Nilai[i] == Bilangan)
        {
            ketemu = true;
            Posisi[Banyak] = i;
            Banyak++;
        }
    }

    if (ketemu)
    {
        cout << "Bilangan " << Bilangan << " ditentukan sebanyak " << Banyak;
        cout << "\npada posisi ke = ";
        for (i = 0; i < Banyak; i++)
            cout << Posisi[i] << " ";
    }
    else
    {
        cout << "Bilangan " << Bilangan << "tidak ditemukan";
    }

    getch();
}