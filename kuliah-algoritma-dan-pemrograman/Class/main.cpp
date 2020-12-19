#include <iostream>
#include <string>

void newLine()
{
    std::cout << std::endl;
}

class DataMahasiswa
{
public:
    void setNama()
    {
        getline(std::cin, nama);
    }
    void setAlamat()
    {
        getline(std::cin, alamat);
    }
    std::string getNama()
    {
        return nama;
    }
    std::string getAlamat()
    {
        return alamat;
    }

private:
    std::string nama;
    std::string alamat;
};

int main()
{
    DataMahasiswa mahasiswa;
    std::cout << "==========================";
    newLine();

    std::cout << "Input Nama : ";
    mahasiswa.setNama();
    newLine();
    std::cout << "Input Alamat : ";
    mahasiswa.setAlamat();
    newLine();

    std::cout << "==========================";
    newLine();
    std::cout << "Nama Mahasiswa : " << mahasiswa.getNama();
    newLine();
    std::cout << "Alamat Mahasiswa : " << mahasiswa.getAlamat();
    newLine();

    std::cout << "==========================";

    return 0;
}