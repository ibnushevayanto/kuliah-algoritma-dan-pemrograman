#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int Nilai[20], i, j, k, N, temp;

    cout << "Masukkan bilangan : ";
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
    for (i = 1; i < N; i++)
    {
        temp = Nilai[i];
        j = i - 1;
        while ((temp <= Nilai[j]) && (j >= 1))
        {
            Nilai[j + 1] = Nilai[j];
            j--;
        }
        if (temp >= Nilai[j])
            Nilai[j + 1] = temp;
        else
        {
            Nilai[j + 1] = Nilai[j];
            Nilai[j] = temp;
        }
        cout << endl;
        for (k = 0; k < N; k++)
            cout << Nilai[k] << " ";
    }

    // Proses Cetak Setelah Diurutkan
    cout << "\nData setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << Nilai[i] << " ";

    getch();
}