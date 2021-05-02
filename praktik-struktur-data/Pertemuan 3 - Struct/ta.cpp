#include <iostream>
#include <conio.h>

struct Tinggal
{
    std::string Jalan;
    std::string Kode_Pos;
    std::string Kota;
};

struct Tanggal
{
    int Tanggal;
    int Bulan;
    int Tahun;
};

struct Biodata
{
    std::string NIP;
    std::string Nama;
    Tinggal Alamat;
    std::string Jabatan;
    std::string Agama;
    Tanggal Tanggal_Mulai_Kerja;
    std::string Unit_Kerja;
};

const int MAX_JUMLAH_DATA = 5;

main()
{
    int jumlah_data;
    Biodata DaftarBiodata[MAX_JUMLAH_DATA];

    std::cout << "Input Maximal Jumlah Data (max 5) : ";
    std::cin >> jumlah_data;
    std::cin.ignore();

    if (jumlah_data > 5)
    {
        jumlah_data = 5;
    }

    std::cout << "\nInput Data Pegawai : \n";
    for (int index = 0; index < jumlah_data; index++)
    {
        std::cout << "\nData ke-" << index + 1 << " : " << std::endl;
        std::cout << "NIP = ";
        std::getline(std::cin, DaftarBiodata[index].NIP);
        std::cout << "Nama = ";
        std::getline(std::cin, DaftarBiodata[index].Nama);

        std::cout << "\nAlamat : " << std::endl;
        std::cout << "Jalan = ";
        std::getline(std::cin, DaftarBiodata[index].Alamat.Jalan);
        std::cout << "Kota = ";
        std::getline(std::cin, DaftarBiodata[index].Alamat.Kota);
        std::cout << "Kode Pos = ";
        std::getline(std::cin, DaftarBiodata[index].Alamat.Kode_Pos);

        std::cout << "\nJabatan = ";
        std::getline(std::cin, DaftarBiodata[index].Jabatan);
        std::cout << "Agama = ";
        std::getline(std::cin, DaftarBiodata[index].Agama);
        std::cout << "Unit Kerja = ";
        std::getline(std::cin, DaftarBiodata[index].Unit_Kerja);

        std::cout << "\nTanggal Mulai Kerja : " << std::endl;
        std::cout << "Tanggal = ";
        std::cin >> DaftarBiodata[index].Tanggal_Mulai_Kerja.Tanggal;
        std::cout << "Bulan = ";
        std::cin >> DaftarBiodata[index].Tanggal_Mulai_Kerja.Bulan;
        std::cout << "Tahun = ";
        std::cin >> DaftarBiodata[index].Tanggal_Mulai_Kerja.Tahun;
        std::cin.ignore();
    }

    std::cout << "\nDaftar Data Pegawai : \n";
    for (int index = 0; index < jumlah_data; index++)
    {
        std::cout << "\nData ke-" << index + 1 << " : " << std::endl;
        std::cout << "NIP = " << DaftarBiodata[index].NIP << std::endl;
        std::cout << "Nama = " << DaftarBiodata[index].Nama << std::endl;

        std::cout << "\nAlamat : " << std::endl;
        std::cout << "Jalan = " << DaftarBiodata[index].Alamat.Jalan << std::endl;
        std::cout << "Kota = " << DaftarBiodata[index].Alamat.Kota << std::endl;
        std::cout << "Kode Pos = " << DaftarBiodata[index].Alamat.Kode_Pos << std::endl;

        std::cout << "\nJabatan = " << DaftarBiodata[index].Jabatan << std::endl;
        std::cout << "Agama = " << DaftarBiodata[index].Agama << std::endl;
        std::cout << "Unit Kerja = " << DaftarBiodata[index].Unit_Kerja << std::endl;

        std::cout << "\nTanggal Mulai Kerja : " << std::endl;
        std::cout << "Tanggal = " << DaftarBiodata[index].Tanggal_Mulai_Kerja.Tanggal << std::endl;
        std::cout << "Bulan = " << DaftarBiodata[index].Tanggal_Mulai_Kerja.Bulan << std::endl;
        std::cout << "Tahun = " << DaftarBiodata[index].Tanggal_Mulai_Kerja.Tahun << std::endl;
    }

    getch();
}