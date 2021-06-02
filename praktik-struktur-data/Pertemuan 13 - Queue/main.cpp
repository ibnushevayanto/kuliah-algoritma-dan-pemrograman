#include <iostream>
#include <conio.h>
using namespace std;

// ! Deklarasi Awal Queue

#define max 7

int data[max];
int head = -1, tail = -1;

// ! IsEmpty

bool IsEmpty()
{
    if (head == -1 && tail == -1)
        return true;
    else
        return false;
}

// ! IsFull

bool IsFull()
{
    if (tail == max - 1)
        return true;
    else
        return false;
}

// ! Enqueue

void Enqueue(int data[])
{
    if (IsFull())
    {
        cout << "Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
        getch();
    }
    else
    {
        if (IsEmpty())
        {
            head = tail = 0;
            cout << "Masukkan data : ";
            cin >> data[tail];
        }
        else
        {
            tail++;
            cout << "Masukkan data : ";
            cin >> data[tail];
        }
    }
}

// ! Dequeue

void Dequeue(int data[])
{
    int a;
    if (IsEmpty())
    {
        cout << "Antrian kosong ! ";
        getch();
    }
    else
    {
        cout << "Data yang diambil : " << data[head];
        for (a = head; a <= tail - 1; a++)
            data[a] = data[a + 1];
        tail--;
        if (tail == -1)
            head = -1;
    }
}

// ! Clear

void Clear()
{
    head = tail = -1;
    cout << "Antrian sudah dikosongkan ! ";
    getch();
}

// ! View

void View(int data[])
{
    int a;
    if (IsEmpty())
    {
        cout << "Antrian kosong ! ";
        getch();
    }
    else
    {
        for (a = head; a <= tail; a++)
            cout << "Data pada antrian ke " << a << " = " << data[a] << endl;
        getch();
    }
}

main()
{
    getch();
}