#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int Nilai[20], i, k, N, I, temp, jarak, s;

    cout << "Masukkan Banyaknya Bilangan : ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Masukkan elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    // Proses cetak sebelum diurutkan
    cout << "\nData Sebelum Diurut : ";
    for (i = 0; i < N; i++)
        cout << Nilai[i] << " ";

    // Proses Pengurutan
    jarak = N / 2;
    cout << "\nJarak = " << jarak << endl;

    while (jarak >= 1)
    {
        do
        {
            s = 0;
            for (i = 0; i < (N - jarak) - 1; i++)
            {
                k = i + jarak;
                if (Nilai[i] < Nilai[k])
                {
                    temp = Nilai[i];
                    Nilai[i] = Nilai[k];
                    Nilai[k] = temp;
                    s = 1;
                    for (I = 0; I < N; I++)
                        cout << Nilai[I] << " ";
                    cout << "\n\t";
                    getch();
                }
            }
        } while (s != 0);
        jarak /= 2;
        cout << "\nJarak = " << jarak << endl;
    }

    cout << "\nData setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << Nilai[i] << " ";

    getch();
}