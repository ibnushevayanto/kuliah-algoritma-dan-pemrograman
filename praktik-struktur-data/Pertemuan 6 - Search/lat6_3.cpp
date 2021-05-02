#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    // deklarasi variabel
    int Nilai[20], i, j, N, temp, awal, akhir, tengah, Bilangan;

    // proses penginputan data
    cout << "Banyak Bilangan : ";
    cin >> N;
    if (N > 20)
        N = 20;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i << " = ";
        cin >> Nilai[i];
    }

    cout << "\nElemen Sebelum diurut = ";
    for (i = 0; i < N; i++)
        cout << "   " << Nilai[i];

    // proses pengurutan datas
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (Nilai[i] > Nilai[j])
            {
                temp = Nilai[i];
                Nilai[i] = Nilai[j];
                Nilai[j] = temp;
            }
        }
    }

    cout << "\nElemen Setelah diurut = ";
    for (i = 0; i < N; i++)
        cout << "   " << Nilai[i];

    cout << "\nindeks Elemen = ";
    for (i = 0; i < N; i++)
        cout << "   " << i;

    cout << "\nMasukkan data yang akan anda cari : ";
    cin >> Bilangan;

    // Proses Pencarian Data
    awal = 0;
    akhir = N - 1;

    do
    {
        tengah = (akhir + awal) / 2;
        if (Bilangan < Nilai[tengah])
            akhir = tengah - 1;
        else
            awal = tengah + 1;
    } while ((akhir >= awal) && (Nilai[tengah] != Bilangan));

    if (Nilai[tengah] == Bilangan)
    {
        cout << "\nData " << Bilangan << " ada dalam array ";
        cout << " pada posisi " << tengah;
    }
    else
        cout << "\nData " << Bilangan << " tidak ada dalam array \n";

    getch();
}