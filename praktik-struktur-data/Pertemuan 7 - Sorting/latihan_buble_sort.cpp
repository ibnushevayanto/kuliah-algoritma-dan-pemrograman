#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int Nilai[20], N, temp, index = 0;
    bool tukar;

    cout << "Masukkan jumlah datas yang ingin dimasukkan (max:20) = ";
    cin >> N;

    if (N > 20)
        N = 20;

    cout << "\nInput Data : \n";
    for (index = 0; index < N; index++)
    {
        cout << "Masukkan elemen ke-" << index << " = ";
        cin >> Nilai[index];
    }

    cout << "\nData Sebelum Diurut = ";
    for (index = 0; index < N; index++)
        cout << Nilai[index] << " ";

    cout << endl;

    // * Proses Pengurutan Metode Bubble Sort
    while (true)
    {
        tukar = false;
        for (index = 0; index < N - 1; index++)
        {
            if (Nilai[index] > Nilai[index + 1])
            {
                temp = Nilai[index + 1];
                Nilai[index + 1] = Nilai[index];
                Nilai[index] = temp;
                tukar = true;
            }
        }
        if (!tukar)
            break;
    }

    cout << "\nData Setelah Diurut = ";
    for (index = 0; index < N; index++)
        cout << Nilai[index] << " ";

    getch();
}