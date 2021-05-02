#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int Nilai[20], i, N, angka, Bilangan;

    cout << "Masukkan Banyaknya Bilangan = ";
    cin >> N;
    if (N > 20)
        N = 20;

    // Input Elemen Array
    for (i = 0; i < N; i++)
    {
        cout << "Masukkan Elemen ke-" << i << "=";
        cin >> Nilai[i];
    }

    // Mencetak Elemen Array
    cout << "\n\nDeretan Bilangan = ";
    for (i = 0; i < N; i++)
        cout << Nilai[i] << " ";

    cout << "\n\nMasukkan bilangan yang anda cari = ";
    cin >> Bilangan;

    // Melakukan Pencarian
    i = 0;
    do
    {
        if (Nilai[i] == Bilangan)
            angka = Nilai[i];
        i++;
    } while (i < N);

    if (angka == Bilangan)
        cout << "Bilangan " << Bilangan << " ditemukan";
    else
        cout << "Bilangan " << Bilangan << " tidak ditemukan";

    getch();
}