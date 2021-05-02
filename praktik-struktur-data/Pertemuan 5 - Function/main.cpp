#include <iostream>
#include <conio.h>

using namespace std;

int functionPertama(int parameter_1, int parameter_2){
    return parameter_1 * parameter_2;
}

main()
{
    cout << functionPertama(6, 2); // * Akan menampilkan angka 12
    getch();
}