#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int Nilai[20];
    int i, N, Terbesar;
    cout << "Masukan banyaknya bilangan = ";
    cin >> N;
    cout << endl;

    // membaca elemen array
    for (i = 0; i < N; i++)
    {
        cout << "Masukkan elemen ke-" << i << "=";
        cin >> Nilai[i];
    }
    Terbesar = Nilai[0]; // index pertama dibuat sebagai terbesar
    for (i = 0; i < N; i++)
    {
        if (Nilai[i] > Terbesar)
            Terbesar = Nilai[i];
    }

    // Mencetak Bilangan Terbesar
    cout << "\nBilangan Terbesar = " << Terbesar;
    getch();
}