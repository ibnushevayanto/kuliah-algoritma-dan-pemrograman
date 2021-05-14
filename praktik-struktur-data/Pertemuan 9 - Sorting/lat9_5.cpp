#include <iostream>
#include <conio.h>
using namespace std;

void tampilData(int *Nilai, int &N)
{
    for (int i = 0; i < N; i++)
        cout << *(Nilai + i) << " ";
}

void inputData(int *Nilai, int &N)
{
    for (int i = 0; i < N; i++)
    {
        cout << "Masukkan elemen ke-" << i << " : ";
        cin >> *(Nilai + i);
    }
}

void ProgramLat9_1(int *Nilai, int &N)
{
    int i, k, I, temp, jarak, s;

    // Proses Sorting
    jarak = N / 2;
    cout << "\nJarak = " << jarak << endl;

    while (jarak >= 1)
    {
        do
        {
            s = 0;
            for (i = 0; i <= (N - jarak) - 1; i++)
            {
                k = i + jarak;
                if (*(Nilai + i) > *(Nilai + k))
                {
                    temp = *(Nilai + i);
                    *(Nilai + i) = *(Nilai + k);
                    *(Nilai + k) = temp;
                    s = 1;
                    for (I = 0; I < N; I++)
                        cout << *(Nilai + I) << " ";

                    cout << "\n\t";
                    getch();
                }
            }
        } while (s != 0);
        jarak /= 2;
        cout << "\nJarak = " << jarak;
    }
}

void ProgramLat9_2(int *Nilai, int &N)
{
    int i, k, I, temp, jarak, s;

    while (jarak >= 1)
    {
        do
        {
            s = 0;
            for (i = 0; i < (N - jarak) - 1; i++)
            {
                k = i + jarak;
                if (*(Nilai + i) < *(Nilai + k))
                {
                    temp = *(Nilai + i);
                    *(Nilai + i) = *(Nilai + k);
                    *(Nilai + k) = temp;
                    s = 1;
                    for (I = 0; I < N; I++)
                        cout << *(Nilai + I) << " ";
                    cout << "\n\t";
                    getch();
                }
            }
        } while (s != 0);
        jarak /= 2;
        cout << "\nJarak = " << jarak << endl;
    }
}

void ProgramLat9_3(int *Nilai, int &N)
{
    int i, j, k, temp;
    // Proses pengurutan
    for (i = 1; i < N; i++)
    {
        temp = *(Nilai + i);
        j = i - 1;
        while ((temp <= *(Nilai + j)) && (j >= 1))
        {
            *(Nilai + j + 1) = *(Nilai + j);
            j--;
        }
        if (temp >= *(Nilai + j))
            *(Nilai + j + 1) = temp;
        else
        {
            *(Nilai + j + 1) = *(Nilai + j);
            *(Nilai + j) = temp;
        }
        cout << endl;
        for (k = 0; k < N; k++)
            cout << *(Nilai + k) << " ";
    }
}

void ProgramLat9_4(int *Nilai, int &N)
{
    int i, j, k, temp;

    // Proses Pengurutan
    for (i = 1; i < N; i++)
    {
        temp = *(Nilai + i);
        j = i - 1;
        while ((temp > *(Nilai + j)) && (j >= 1))
        {
            *(Nilai + j + 1) = *(Nilai + j);
            j--;
        }
        if (temp <= *(Nilai + j))
            *(Nilai + j + 1) = temp;
        else
        {
            *(Nilai + j + 1) = *(Nilai + j);
            *(Nilai + j) = temp;
        }
        cout << endl;
        for (k = 0; k < N; k++)
            cout << *(Nilai + k) << " ";
    }
}

main()
{
    int Nilai[20], N, menuProgram;

    cout << "\nMenu Program" << endl;
    cout << "1. Program pengurutan dengan metode shell sort \"Pengurutan Secara Menaik\"" << endl;
    cout << "2. Program pengurutan dengan metode shell sort \"Pengurutan Secara Menurun\"" << endl;
    cout << "3. Program pengurutan dengan metode insertion sort \"Pengurutan Secara Menaik\"" << endl;
    cout << "4. Program pengurutan dengan metode insertion sort \"Pengurutan Secara Menurun\"" << endl;

    cout << "\nMasukkan kode program : ";
    cin >> menuProgram;

    if (menuProgram <= 4 && menuProgram != 0)
    {
        cout << "\nMasukan Banyak Bilangan : ";
        cin >> N;
        if (N > 20)
            N = 20;
        inputData(Nilai, N);

        // Proses cetak sebelum diurutkan
        cout << "\nData sebelum diurut : ";
        tampilData(Nilai, N);
    }

    switch (menuProgram)
    {
    case 1:
        ProgramLat9_1(Nilai, N);
        break;
    case 2:
        ProgramLat9_2(Nilai, N);
        break;
    case 3:
        ProgramLat9_3(Nilai, N);
        break;
    case 4:
        ProgramLat9_4(Nilai, N);
        break;
    default:
        cout << "Kode angka yang anda masukkan tidak valid";
        break;
    }

    if (menuProgram <= 4 && menuProgram != 0)
    {
        cout << "\nData setelah diurut : ";
        tampilData(Nilai, N);
    }

    getch();
}