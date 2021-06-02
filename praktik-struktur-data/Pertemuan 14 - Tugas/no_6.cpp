//  ! Shell Sort

#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int Nilai[20], i, k, N, I, temp, jarak, s;

    cout << "Masukan Banyak Bilangan(MAX:20) = ";
    cin >> N;
    if (N > 20)
        N = 20;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    cout << "\nData sebelum diurut : ";
    for (i = 0; i < N; i++)
        cout << Nilai[i] << " ";

    jarak = N / 2;
    while (jarak >= 1)
    {
        do
        {
            s = 0;
            for (i = 0; i <= (N - jarak) - 1; i++)
            {
                k = i + jarak;
                if (Nilai[i] > Nilai[k])
                {
                    temp = Nilai[i];
                    Nilai[i] = Nilai[k];
                    Nilai[k] = temp;
                    s = 1;
                }
            }
        } while (s != 0);
        jarak /= 2;
    }
    cout << "\nData setelah diurut : ";
    for (i = 0; i < N; i++)
        cout << Nilai[i] << " ";

    getch();
}