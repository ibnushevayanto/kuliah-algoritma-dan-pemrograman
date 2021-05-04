#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int Nilai[20], i, j, k, N, temp;
    bool tukar;

    cout << "Masukan Banyak Bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    // Proses cetak sebelum diurutkan
    cout << "\nData sebelummya diurut : ";
    for (i = 0; i < N; i++)
        cout << " " << Nilai[i];

    // Proses Pengurutan
    i = 0;
    tukar = true;
    while ((i <= N - 2) && (tukar))
    {
        tukar = false;
        for (j = N - 1; j >= i + 1; j--)
        {
            if (Nilai[j] < Nilai[j - 1])
            {
                temp = Nilai[j];
                Nilai[j] = Nilai[j - 1];
                Nilai[j - 1] = temp;
                tukar = true;
                cout << endl;

                for (k = 0; k < N; k++)
                    cout << " " << Nilai[k];
            }
        }
        i++;
    }

    // Proses cetak setelah diurutkan
    cout << "\nData setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << " " << Nilai[i];

    getch();
}