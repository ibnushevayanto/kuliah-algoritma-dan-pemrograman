#include <iostream>
#include <conio.h>
using namespace std;

main()
{
    int array2Dimensi[2][2];
    int(*pointerArray2DimensiKolom)[2] = array2Dimensi;

    cout << "Input Data : \n";
    for (int indexBaris = 0; indexBaris < 2; indexBaris++)
    {
        for (int indexKolom = 0; indexKolom < 2; indexKolom++)
        {
            cout << "index baris ke-" << indexBaris << " & index kolom ke-" << indexKolom << " = ";
            cin >> *(pointerArray2DimensiKolom[indexBaris] + indexKolom);
        }
    }
    cout << "\nTampil Data : \n";
    for (int indexBaris = 0; indexBaris < 2; indexBaris++)
    {
        for (int indexKolom = 0; indexKolom < 2; indexKolom++)
        {
            cout << *(pointerArray2DimensiKolom[indexBaris] + indexKolom) << " ";
        }
        cout << endl;
    }
}