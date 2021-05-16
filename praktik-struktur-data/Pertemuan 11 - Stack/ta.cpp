#include <iostream>
#include <conio.h>
using namespace std;
const int maxIsi = 100;

struct Stack
{
    int nilai[maxIsi];
    int Top;
};

void PUSH(Stack &data, int nilai);
void CETAK_BINARY(Stack &data);
void INITS(Stack &data);

main()
{
    Stack data;
    int bilanganDecimal;
    INITS(data);

    cout << "Masukkan bilangan decimal yang ingin dikonversikan : ";
    cin >> bilanganDecimal;

    while (bilanganDecimal >= 1)
    {
        PUSH(data, (int) bilanganDecimal % 2);
        bilanganDecimal /= 2;
    }

    CETAK_BINARY(data);

    getch();
}

void INITS(Stack &data)
{
    data.Top = 0;
}

void PUSH(Stack &data, int nilai)
{
    if (data.Top < maxIsi)
    {
        data.nilai[data.Top] = nilai;
        data.Top++;
    }
    else
        cout << "\nStack Penuh...";
}

void CETAK_BINARY(Stack &data)
{
    if (data.Top == 0)
        cout << "\nStack Kosong...";
    else
    {
        cout << "Bilangan Binary : ";
        for (int i = data.Top - 1; i >= 0; i--)
        {
            cout << data.nilai[i];
        }
    }
}