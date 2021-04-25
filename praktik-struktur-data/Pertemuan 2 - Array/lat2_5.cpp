#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int matriks[3][4];
    int indexBaris, indexKolom;

    cout << "Bentuk Matriks Ordo 3x4 : \n";
    for (indexBaris = 0; indexBaris < 3; indexBaris++)
    {
        for (indexKolom = 0; indexKolom < 4; indexKolom++)
        {
            cout << "input nilai baris ke-" << indexBaris + 1 << " kolom ke-" << indexKolom + 1 << " = ";
            cin >> matriks[indexBaris][indexKolom];
        }
    }

    cout << "\nHasil matriks : \n";
    for (indexBaris = 0; indexBaris < 3; indexBaris++)
    {
        for (indexKolom = 0; indexKolom < 4; indexKolom++)
        {
            cout << matriks[indexBaris][indexKolom] << " ";
        }
        cout << endl;
    }

    getch();
}