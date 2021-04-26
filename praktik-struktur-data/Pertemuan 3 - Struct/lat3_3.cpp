#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

struct Mahasiswa
{
    char Nim[9];
    char Nama[25];
    char Alamat[40];
    int Umur;
};

main()
{
    Mahasiswa Mhs[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        cout << "\nNim : ";
        cin.getline(Mhs[i].Nim, 9);
        cout << "Nama : ";
        cin.getline(Mhs[i].Nama, 25);
        cout << "Alamat : ";
        cin.getline(Mhs[i].Alamat, 40);
        cout << "Umur : ";
        cin >> Mhs[i].Umur;
        cin.ignore();
    }

    for (i = 0; i < 5; i++)
    {
        cout << "\n\nNim : " << Mhs[i].Nim;
        cout << "\nNama : " << Mhs[i].Nama;
        cout << "\nAlamat : " << Mhs[i].Alamat;
        cout << "\nUmur : " << Mhs[i].Umur;
    }

    getch();
}