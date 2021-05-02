#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int Nilai[20], Posisi[20], i, N, Bilangan, Banyak = 0;
    bool Ketemu;

    cout << "Masukkan Banyaknya Bilangan = ";
    cin >> N;
    if (N > 20)
        N = 20;

    // Membaca elemen array
    for (i = 0; i < N; i++)
    {
        cout << "Masukkan elemen ke-" << i << " = ";
        cin >> Nilai[i];
    }

    // Mencetak elemen array
    cout << "\n\nDeretan Bilangan = ";
    for (i = 0; i < N; i++)
        cout << Nilai[i] << " ";

    cout << "\n\nMasukkan Bilangan yang akan dicari = ";
    cin >> Bilangan;

    // Melakukan Pencarian
    for (i = 0; i < N; i++)
    {
        if (Nilai[i] == Bilangan)
        {
            Ketemu = true;
            Posisi[Banyak] = i;
            Banyak++;
        }
    }

    if (Ketemu)
    {
        cout << "Bilangan " << Bilangan << " ditemukan sebanyak " << Banyak;
        cout << "\npada posisi ke = ";

        for (i = 0; i < Banyak; i++)
            cout << Posisi[i] << " ";
    }
    else
    {
        cout << "Bilangan " << Bilangan << " tidak ditemukan";
    }

    getch();
}