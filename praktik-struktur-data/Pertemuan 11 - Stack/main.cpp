#include <iostream>
#include <conio.h>
using namespace std;
const int MaxS = 10;

struct Stack
{
    char Isi[MaxS];
    unsigned int Top;
};

void INITS(Stack &s);
void PUSH(Stack &s, char Data);
void CETAK(Stack S);
void POP(Stack &S, char &Hsl);

main()
{
    char huruf;
    Stack S;
    INITS(S);

    for (int index = 0; index < 3; index++)
    {
        cout << "Masukkan Karakter : ";
        cin >> huruf;
        PUSH(S, huruf);
    }

    CETAK(S);

    getch(); // ! PIT STOP 1

    POP(S, huruf);
    cout << endl
         << "Yang Dihapus ..... " << huruf << endl;
    CETAK(S);

    getch(); // ! PIT STOP 2

    cout << endl;
    for (int index = 0; index < 3; index++)
    {
        cout << "Masukkan Karakter : ";
        cin >> huruf;
        PUSH(S, huruf);
    }

    CETAK(S);

    getch(); // ! PIT STOP 3

    POP(S, huruf);
    cout << endl
         << "Yang Dihapus ....... " << huruf << endl;
    CETAK(S);

    getch(); // ! End
}

void INITS(Stack &S)
{
    S.Top = 0;
}

void PUSH(Stack &S, char Data)
{
    if (S.Top < MaxS)
    {
        S.Isi[S.Top] = Data;
        S.Top++;
    }
    else
        cout << "Stack Penuh...";
}

void CETAK(Stack S)
{
    if (S.Top != 0)
    {
        cout << "Data Cetak : ";
        for (int index = 0; index < S.Top; index++)
        {
            cout << S.Isi[index] << " ";
        }
    }
    else
        cout << "Stack Kosong";
}

void POP(Stack &S, char &Hsl)
{
    if (S.Top != 0)
    {
        Hsl = S.Isi[S.Top];
        S.Top--;
    }
    else
        cout << "Stack Kosong";
}