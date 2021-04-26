#include <iostream>
#include <conio.h>

struct Mahasiswa
{
    std::string nama;
    std::string kelas;
};

int main()
{
    Mahasiswa daftar_mahasiswa[2];
    int index = 0;

    std::cout << "Input Mahasiswa : \n";

    for (Mahasiswa mahasiswa : daftar_mahasiswa)
    {
        std::cout << "Nama : ";
        std::cin >> daftar_mahasiswa[index].nama;
        std::cout << "Kelas : ";
        std::cin >> daftar_mahasiswa[index].kelas;
        std::cout << std::endl
                  << std::endl;
        index++;
    }

    index = 0;
    std::cout << "Daftar Mahasiswa : \n";
    for (Mahasiswa mahasiswa : daftar_mahasiswa)
    {
        std::cout << "Nama : " << daftar_mahasiswa[index].nama << std::endl
                  << "Kelas :" << daftar_mahasiswa[index].kelas << std::endl
                  << std::endl;
        index++;
    }

    getch();
}