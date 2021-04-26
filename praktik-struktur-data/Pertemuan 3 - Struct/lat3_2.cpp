#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

struct Tinggal
{
    char Jalan[40];
    char Kota[15];
    char Pos[5];
};

struct Tgl_Lahir
{
    int Tanggal;
    int Bulan;
    int Tahun;
};

struct Mahasiswa
{
    char Nim[9];
    char Nama[25];
    Tinggal Alamat;
    Tgl_Lahir Lahir;
};

int main()
{
    Mahasiswa Mhs;
    cout << "NIM : ";
    cin.getline(Mhs.Nim, 9);
    cout << "Nama : ";
    cin.getline(Mhs.Nama, 25);
    cout << "Alamat : \n ";
    cout << "\tJalan : ";
    cin.getline(Mhs.Alamat.Jalan, 40);
    cout << "\tKota : ";
    cin.getline(Mhs.Alamat.Kota, 15);
    cout << "\tkode pos : ";
    cin.getline(Mhs.Alamat.Pos, 5);
    cout << "Tanggal Lahir : \n ";
    cout << "\tTanggal : ";
    cin >> Mhs.Lahir.Tanggal;
    cout << "\tBulan : ";
    cin >> Mhs.Lahir.Bulan;
    cout << "\tTahun : ";
    cin >> Mhs.Lahir.Tahun;

    cout << "\n\nMencetak Kembali Nilai Anggota\n\n ";
    cout << "NIM : " << Mhs.Nim;
    cout << "\nNama : " << Mhs.Nama;
    cout << "\nAlamat : \n ";
    cout << "\n\tJalan : ";
    cin.getline(Mhs.Alamat.Jalan, 40);
    cout << "\n\tKota : " << Mhs.Alamat.Kota;
    cout << "\n\tkode pos : " << Mhs.Alamat.Pos;
    cout << " Tanggal Lahir : \n ";
    cout << "\n\tTanggal : " << Mhs.Lahir.Tanggal;
    cout << "\n\tBulan : " << Mhs.Lahir.Bulan;
    cout << "\n\tTahun : " << Mhs.Lahir.Tahun;

    getch();
}