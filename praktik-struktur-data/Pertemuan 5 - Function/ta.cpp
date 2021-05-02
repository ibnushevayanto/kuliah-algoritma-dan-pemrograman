#include <iostream>
#include <conio.h>

using namespace std;

void hitungNilaiKelipatan(double *nilai)
{
    double nilaiInput = *nilai;
    for (int i = 0; i < nilaiInput - 1; i++)
    {
        *nilai *= nilaiInput;
    }
}

main()
{
    double nilai;

    cout << "Input Nilai Kelipatan : ";
    cin >> nilai;

    cout << "Nilai Kelipatan Dari " << nilai << " adalah ";
    hitungNilaiKelipatan(&nilai);
    cout << nilai;

    getch();
}