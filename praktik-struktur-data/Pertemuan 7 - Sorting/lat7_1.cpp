#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int Nilai[20], i, j, k, N, temp;
    bool tukar;

    cout << "Masukan banyak bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i << " = ";
        cin >> Nilai[i];
    }

    // Proses cetak sebelum diurutkan
    cout << "\nData sebelumnya diurut : ";
    for (i = 0; i < N; i++)
        cout << " " << Nilai[i];

    // Proses pengurutan
    i = 0;
    tukar = true;

    while ((i <= N - 2) && tukar)
    {
        tukar = false;
        for (j = N - 1; j >= i + 1; j--)
        {
            if (Nilai[j] < Nilai[j - 1])
            {
                temp = Nilai[j - 1];
                Nilai[j] = Nilai[j - 1];
                Nilai[j - 1] = temp;
                tukar = true;
                cout << "\nUntuk j = " << j << " : ";
                for (k = 0; k < N; k++)
                    cout << " " << Nilai[k];
            }
        }
        i++;
    }

    // Proses cetak setelah diurutkan
    cout << "\nData setelah di urut : ";
    for (i = 0; i < N; i++)
        cout << " " << Nilai[i];

    getch();
}