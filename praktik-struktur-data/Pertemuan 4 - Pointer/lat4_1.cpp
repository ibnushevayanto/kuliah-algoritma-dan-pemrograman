#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int x = 8, y;
    int *xPtr;
    xPtr = &x;

    cout << "Nilai x : " << x << endl;
    cout << "Alamat x : " << &x << endl;
    cout << "Alamat x : " << xPtr << endl;
    cout << "Nilai yang disimpan pada alamat ";
    cout << xPtr << " adalah " << *xPtr;

    getch();
}