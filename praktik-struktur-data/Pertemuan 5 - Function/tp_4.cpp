#include <iostream>
#include <conio.h>
using namespace std;
void operasi(int a, int b, int &variabelHasil, char operasi)
{
    switch (operasi)
    {
    case '+':
        variabelHasil = a + b;
        break;
    case '-':
        variabelHasil = a - b;
        break;
    case '*':
        variabelHasil = a * b;
        break;
    case '/':
        variabelHasil = a / b;
        break;
    default:
        cout << "Operator tidak diketahui";
        variabelHasil = 0;
        break;
    }
}
main()
{
    int hasil;
    operasi(10, 2, hasil, '*');
    std::cout << "\nHasil : " << hasil;
    getch();
}