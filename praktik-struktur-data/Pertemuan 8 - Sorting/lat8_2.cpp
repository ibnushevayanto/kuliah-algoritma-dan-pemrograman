#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int Nilai[20], i, j, N, I, temp, U, Imaks;
    cout << "Masukkan banyaknya bilangan : ";
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

    // Proses Pengurutan
    U = N - 1;
    for (i = 0; i <= N - 2; i++)
    {
        Imaks = i;
        for (j = i + 1; j <= U; j++)
        {
            if (Nilai[j] > Nilai[Imaks])
                Imaks = j;
        }
        temp = Nilai[i];
        Nilai[i] = Nilai[Imaks];
        Nilai[Imaks] = temp;
        cout << endl;

        for (I = 0; I < N; I++)
            cout << Nilai[I] << " ";
    }

    cout << "\nData setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << Nilai[i] << " ";

    getch();
}