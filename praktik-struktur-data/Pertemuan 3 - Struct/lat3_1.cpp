#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

struct Mahasiswa
{
    char Nim[9];
    char Nama[25];
    char Alamat[40];
    short Umur;
};

int main()
{
    Mahasiswa mhs;

    cout << "Nim :";
    cin.getline(mhs.Nim, 9);
    cout << "Nama :";
    cin.getline(mhs.Nama, 25);
    cout << "Alamat :";
    cin.getline(mhs.Alamat, 40);
    cout << "Umur :";
    cin >> mhs.Umur;

    cout << "\n\n\nNim : " << mhs.Nim;
    cout << "\nNama : " << mhs.Nama;
    cout << "\nAlamat : " << mhs.Alamat;
    cout << "\nUmur : " << mhs.Umur;

    getch();
}