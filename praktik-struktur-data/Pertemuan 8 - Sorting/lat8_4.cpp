#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int Nilai[20], i, j, N, I, temp, U, Imin;

    cout << "Masukkan banyaknya bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Masukkan elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    // Proses cetak sebelum diurutkan
    cout << "\nData sebelum diurut : ";
    for (i = 0; i < N; i++)
        cout << Nilai[i] << " ";

    // Proses pengurutan
    U = N - 1;
    for (i = 0; i <= N - 2; i++)
    {
        Imin = 0;
        for (j = 1; j <= U; j++)
        {
            if (Nilai[j] < Nilai[Imin])
                Imin = j;
        }

        temp = Nilai[U];
        Nilai[U] = Nilai[Imin];
        Nilai[Imin] = temp;
        cout << endl;
        U--;
        for (I = 0; I < N; I++)
            cout << Nilai[I] << " ";
    }

    cout << "\nData setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << Nilai[i] << " ";

    getch();
}