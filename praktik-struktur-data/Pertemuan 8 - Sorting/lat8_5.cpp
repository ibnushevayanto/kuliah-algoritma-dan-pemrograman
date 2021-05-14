#include <iostream>
#include <conio.h>
using namespace std;

void tampilArray(int *data, int &jumlah)
{
    for (int index = 0; index < jumlah; index++)
        cout << *(data + index) << " ";
}

void inputData(int *data, int &jumlah)
{
    for (int index = 0; index < jumlah; index++)
    {
        cout << "Masukkan elemen ke-" << index << ":";
        cin >> *(data + index);
    }
}

void programLat8_1(int *Nilai, int &N)
{
    int i, j, I, temp, U, Imaks;

    inputData(Nilai, N);

    // Proses cetak sebelum diurutkan
    cout << "\nData sebelum diurut : ";
    tampilArray(Nilai, N);

    // Proses Pengurutan
    U = N - 1;
    for (i = 0; i <= N - 2; i++)
    {
        Imaks = 0;
        for (j = 1; j <= U; j++)
        {
            if (*(Nilai + j) > *(Nilai + Imaks))
            {
                Imaks = j;
            }
        }
        temp = *(Nilai + U);
        *(Nilai + U) = *(Nilai + Imaks);
        *(Nilai + Imaks) = temp;
        U--;
        cout << endl;

        for (I = 0; I < N; I++)
            cout << *(Nilai + 1) << " ";
    }

    cout << "\nData setelah diurut : ";
    tampilArray(Nilai, N);
}

void programLat8_2(int *Nilai, int &N)
{
    int i, j, I, temp, U, Imaks;
    inputData(Nilai, N);

    // Proses cetak sebelum diurutkan
    cout << "\nData sebelum diurut : ";
    tampilArray(Nilai, N);

    // Proses Pengurutan
    U = N - 1;
    for (i = 0; i <= N - 2; i++)
    {
        Imaks = i;
        for (j = i + 1; j <= U; j++)
        {
            if (*(Nilai + j) > *(Nilai + Imaks))
                Imaks = j;
        }
        temp = *(Nilai + i);
        *(Nilai + i) = *(Nilai + Imaks);
        *(Nilai + Imaks) = temp;
        cout << endl;

        for (I = 0; I < N; I++)
            cout << *(Nilai + I) << " ";
    }

    cout << "\nData setelah diurut : ";
    tampilArray(Nilai, N);
}

void programLat8_3(int *Nilai, int &N)
{
    int i, j, I, temp, Imin;

    inputData(Nilai, N);

    // Proses cetak sebelum diurutkan
    cout << "\nData sebelum diurut : ";
    tampilArray(Nilai, N);

    // Proses pengurutan
    for (i = 0; i <= N - 2; i++)
    {
        Imin = i;
        for (j = i + 1; j < N; j++)
        {
            if (*(Nilai + j) < *(Nilai + Imin))
                Imin = j;
        }
        temp = *(Nilai + i);
        *(Nilai + i) = *(Nilai + Imin);
        *(Nilai + Imin) = temp;
        cout << endl;

        for (I = 0; I < N; I++)
            cout << *(Nilai + I) << " ";
    }

    cout << "\nData setelah diurut : ";
    tampilArray(Nilai, N);
}

programLat8_4(int *Nilai, int &N)
{
    int i, j, I, temp, U, Imin;

    inputData(Nilai, N);

    // Proses cetak sebelum diurutkan
    cout << "\nData sebelum diurut : ";
    tampilArray(Nilai, N);

    // Proses pengurutan
    U = N - 1;
    for (i = 0; i <= N - 2; i++)
    {
        Imin = 0;
        for (j = 1; j <= U; j++)
        {
            if (*(Nilai + j) < *(Nilai + Imin))
                Imin = j;
        }

        temp = *(Nilai + U);
        *(Nilai + U) = *(Nilai + Imin);
        *(Nilai + Imin) = temp;
        cout << endl;
        U--;
        for (I = 0; I < N; I++)
            cout << *(Nilai + I) << " ";
    }

    cout << "\nData setelah diurut : ";
    tampilArray(Nilai, N);
}

main()
{
    int nomorProgram, Nilai[20], N;

    cout << "Menu\n1. Jalankan Program Lat8_1\n2. Jalankan Program Lat8_2\n3. Jalankan Program Lat8_3\n4. Jalankan Program Lat8_4" << endl;

    cout << "\nMasukkan kode menu : ";
    cin >> nomorProgram;

    cout << "\nMasukkan banyaknya bilangan = ";
    cin >> N;

    if (nomorProgram == 1)
        programLat8_1(Nilai, N);
    else if (nomorProgram == 2)
        programLat8_2(Nilai, N);
    else if (nomorProgram == 3)
        programLat8_3(Nilai, N);
    else if (nomorProgram == 4)
        programLat8_4(Nilai, N);
    else
        cout << "Perintah yang anda masukkan tidak terdaftar, anda akan automatis keluar aplikasi";

    getch();
}