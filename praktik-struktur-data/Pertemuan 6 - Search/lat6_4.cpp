#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct Pegawai
{
    string NIP, Nama, Alamat, Agama, Jabatan;
};

void InputData(Pegawai *DataPegawai, int jumlahInputData);

main()
{
    int jumlahInputData, index = 0;
    Pegawai DataPegawai[20];
    bool ketemu;
    string keyword;

    cout << "Mohon Input Jumlah Data Yang Ingin Anda Input (max 20) : ";
    cin >> jumlahInputData;
    cin.ignore();

    if (jumlahInputData > 20)
        jumlahInputData = 20;

    InputData(DataPegawai, jumlahInputData);

    cout << "\nMasukkan Keyword = ";
    getline(cin, keyword);

    do
    {
        if (DataPegawai[index].Nama == keyword || DataPegawai[index].NIP == keyword || DataPegawai[index].Alamat == keyword || DataPegawai[index].Agama == keyword || DataPegawai[index].Jabatan == keyword)
        {
            ketemu = true;
            break;
        }
        index++;
    } while (index < jumlahInputData);

    if (ketemu)
    {
        cout << "berhasil menemukan keyword : " << keyword << endl;
        cout << "\nData Index Ke-" << index << endl;
        cout << "NIP : " << DataPegawai[index].NIP << endl;
        cout << "Nama : " << DataPegawai[index].Nama << endl;
        cout << "Alamat : " << DataPegawai[index].Alamat << endl;
        cout << "Agama : " << DataPegawai[index].Agama << endl;
        cout << "Jabatan : " << DataPegawai[index].Jabatan << endl;
    }
    else
        cout << "tidak menemukan hasil keyword : " << keyword << endl;

    getch();
}

void InputData(Pegawai *DataPegawai, int jumlahInputData)
{
    for (int i = 0; i < jumlahInputData; i++)
    {
        cout << "\nInput Data Ke-" << i + 1 << endl;
        cout << "NIP : ";
        getline(cin, (DataPegawai + i)->NIP);
        cout << "Nama : ";
        getline(cin, (DataPegawai + i)->Nama);
        cout << "Alamat : ";
        getline(cin, (DataPegawai + i)->Alamat);
        cout << "Agama : ";
        getline(cin, (DataPegawai + i)->Agama);
        cout << "Jabatan : ";
        getline(cin, (DataPegawai + i)->Jabatan);
    }
}