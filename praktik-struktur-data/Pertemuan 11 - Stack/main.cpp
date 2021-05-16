#include <iostream>
#include <conio.h>
using namespace std;

// ! Bentuk Deklarasi Pertama
// int Isi[maxS];
// int Top;

// ! Bentukl Deklarasi Kedua

const int maxS = 10;
struct Stack
{
    int Isi[maxS];
    int Top;
};

void INITS(Stack &S)
{
    S.Top = 0;
}

void Cetak(Stack &S)
{
    int i;
    cout << endl
         << "Isi Stack : ";
    if (S.Top != 0)
    {
        for (i = 0; i < S.Top; i++)
            cout << S.Isi[i];
    }
    else
        cout << "Stack Kosong...";
}

main()
{
}