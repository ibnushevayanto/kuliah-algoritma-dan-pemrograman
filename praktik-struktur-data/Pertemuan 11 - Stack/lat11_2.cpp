#include <iostream>
#include <conio.h>
using namespace std;
const int maxIsi = 10;

struct Stack
{
    char Isi[maxIsi];
    int Top;
};

void INITS(Stack &data);
void PUSH(Stack &data, char character);
void PUSH(Stack &data, char character, int index);
void CETAK(Stack &data);

main()
{
    char huruf, huruf2;
    int N;
    Stack data;
    INITS(data);

    cout << "Berapa character yang akan anda masukkan ? ";
    cin >> N;
    if (N > maxIsi)
        N = maxIsi;

    for (size_t i = 0; i < N; i++)
    {
        cout << "Masukkan character ke-" << i + 1 << " : ";
        cin >> huruf;
        PUSH(data, huruf);
    }

    cout << "\nCharacter sebelum dibalik : ";
    CETAK(data);
    cout << endl;

    int nilaiSetengahnya = N / 2;
    for (size_t i = 0; i < nilaiSetengahnya; i++)
    {
        huruf = data.Isi[i];
        huruf2 = data.Isi[(N - 1) - i];

        PUSH(data, huruf, (N - 1) - i);
        PUSH(data, huruf2, i);
    }

    cout << "\nCharacter setelah dibalik : ";
    CETAK(data);
    cout << endl;

    getch();
}

void INITS(Stack &data)
{
    data.Top = 0;
}

void PUSH(Stack &data, char character)
{
    if (data.Top < maxIsi)
    {
        data.Isi[data.Top] = character;
        data.Top++;
    }
    else
        cout << "\nStack sudah penuh...";
}

void PUSH(Stack &data, char character, int index)
{
    data.Isi[index] = character;
}

void CETAK(Stack &data)
{
    if (data.Top > 0)
    {
        for (size_t i = 0; i < data.Top; i++)
            cout << data.Isi[i] << " ";
    }
    else
        cout << "Stack masih kosong...";
}