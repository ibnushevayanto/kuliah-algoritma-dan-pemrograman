#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int Nilai[20], i, j, N, I, temp, U, Imaks;

    cout << "Masukkan banyaknya bilangan = ";
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
        Imaks = 0;
        for (j = 1; j <= U; j++)
        {
            if (Nilai[j] > Nilai[Imaks])
            {
                Imaks = j;
            }
        }
        temp = Nilai[U];
        Nilai[U] = Nilai[Imaks];
        Nilai[Imaks] = temp;
        U--;
        cout << endl;

        for (I = 0; I < N; I++)
            cout << Nilai[1] << " ";
    }

    cout << "\nData setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << Nilai[i] << " ";

    getch();
}