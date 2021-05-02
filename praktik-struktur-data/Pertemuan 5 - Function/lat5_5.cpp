#include <iostream>
#include <conio.h>

using namespace std;

const int N = 100;
void Baca(int Nilai[], int &M);
void Cetak(int Nilai[N], int &M);
void Jumlah(int Nilai[N], int &M, int &Jlh, float &Rata);

main()
{
    int M, Nilai[N], Jlh = 0;
    float Rata;

    cout << "Banyak Elemen : ";
    cin >> M;
    Baca(Nilai, M);

    cout << "\nElemen Elemen : ";
    Cetak(Nilai, M);

    Jumlah(Nilai, M, Jlh, Rata);

    cout << "\nJumlah Bilangan : " << Jlh;
    cout << "\nRata Rata Bilangan : " << Rata;

    getch();
}

void Cetak(int Nilai[], int &M)
{
    int i;
    for (i = 0; i < M; i++)
    {
        cout << Nilai[i] << " ";
    }
}

void Baca(int Nilai[], int &M)
{
    int i;
    for (i = 0; i < M; i++)
    {
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }
}

void Jumlah(int Nilai[], int &M, int &Jlh, float &Rata)
{
    for (int i = 0; i < M; i++)
    {
        Jlh += Nilai[i];
    }
    Rata = (float)Jlh / M;
}