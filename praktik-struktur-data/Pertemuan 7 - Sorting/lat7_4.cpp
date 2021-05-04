#include <iostream>
#include <conio.h>
using namespace std;

void programKe1()
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

void programKe2()
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

void Cetak(int data[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << " " << data[i];

    cout << "\n";
}

int Partisi(int data[], int p, int r)
{
    int x, i, j, temp;
    x = data[p];
    i = p;
    j = r;

    while (1)
    {
        while (data[j] > x)
            j--;

        while (data[i] < x)
            i++;

        if (i < j)
        {
            temp = data[i];
            data[i] = data[j];
            data[i] = temp;
        }
        else
            return j;
    }
}

void Quick_Sort(int data[], int p, int r)
{
    int q;
    if (p < r)
    {
        q = Partisi(data, p, r + 1);
        Quick_Sort(data, p, q);
        Quick_Sort(data, q + 1, r);
    }
}

void programKe3()
{
    int Nilai[20], i, N;

    cout << "Masukan banyak bilangan ";
    cin >> N;

    for (i = 0; i < N; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }

    cout << "\nData sebelum diurut : ";
    Cetak(Nilai, N);

    cout << endl;
    Quick_Sort(Nilai, 0, N - 1);

    cout << "\nData setelah di urut : ";
    Cetak(Nilai, N);

    getch();
}

main()
{
    int menu;
    cout << "Menu : \n1. Program Pengurutan Dengan Metode Bubble Sort 'Pengurutan Secara Menanik'.\n2. Program pengurutan dengan metode bubble sort 'Pengurutan secara menurun'”.\n3. Pengurutan dengan metode quick sort 'Pengurutan Secara menaik'.";

    cout << "\n\nPiih Menu :";
    cin >> menu;

    switch (menu)
    {
    case 1:
        programKe1();
        break;
    case 2:
        programKe2();
        break;
        programKe3();
        break;
    default:
        cout << "Pilihan yang anda masukan tidak valid";
        break;
    }
}