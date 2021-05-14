#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int i, j, N = 8, temp;
    int Nilai[8] = {2, 1, 3, 4, 6, 7, 5, 8};
    string Kata[8] = {"suka", "aku", "sama", "kamu", "dulu", "sampai", "dari", "sekarang"};
    string tempkata;

    // Proses cetak sebelum diurutkan
    cout << "\nKata sebelum diurut : ";
    for (i = 0; i < N; i++)
        cout << Kata[i] << " ";

    // Proses pengurutan
    for (i = 1; i < N; i++)
    {
        temp = Nilai[i];
        tempkata = Kata[i];

        j = i - 1;
        while ((temp <= Nilai[j]) && (j >= 1))
        {
            Nilai[j + 1] = Nilai[j];
            Kata[j + 1] = Kata[j];

            j--;
        }
        if (temp >= Nilai[j])
        {
            Nilai[j + 1] = temp;
            Kata[j + 1] = tempkata;
        }
        else
        {
            Nilai[j + 1] = Nilai[j];
            Nilai[j] = temp;

            Kata[j + 1] = Kata[j];
            Kata[j] = tempkata;
        }
    }

    // Proses Cetak Setelah Diurutkan
    cout << "\nKata setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << Kata[i] << " ";

    getch();
}