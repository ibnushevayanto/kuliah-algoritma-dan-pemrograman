#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int Nilai[20], i, j, N, I, temp, Imin;

    cout << "Masukkan banyak bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    // Proses cetak sebelum diurutkan
    cout << "\nData sebelum diurut : ";
    for (i = 0; i < N; i++)
        cout << Nilai[i] << " ";

    // Proses pengurutan
    for (i = 0; i <= N - 2; i++)
    {
        Imin = i;
        for (j = i + 1; j < N; j++)
        {
            if (Nilai[j] < Nilai[Imin])
                Imin = j;
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imin];
        Nilai[Imin] = temp;
        cout << endl;

        for (I = 0; I < N; I++)
            cout << Nilai[I] << " ";
    }

    cout << "\nData setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << Nilai[i] << " ";

    getch();
}