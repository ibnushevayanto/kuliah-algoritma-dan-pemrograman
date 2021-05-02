#include <iostream>
#include <conio.h>
using namespace std;

void Tukar(int &a, int &b);

int a = 8, b = -5;
main()
{
    cout << "Nilai a dan b sebelum ditukar  : " << a << " & " << b;
    Tukar(a, b);
    cout << "\nNilai a dan b sebelum ditukar  : " << a << " & " << b;
    getch();
}

void Tukar(int &x, int &y)
{
    int z;
    z = x;
    x = y;
    y = z;
}