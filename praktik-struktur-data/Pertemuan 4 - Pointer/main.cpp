#include <iostream>
#include <conio.h>

int main()
{
    int jumlahAnggota, index = 0;

    std::cout << "Berapa jumlah anggota keluarga anda ? ";
    std::cin >> jumlahAnggota;
    std::cin.ignore();

    std::string Keluarga[jumlahAnggota];

    std::cout << "\nInput Anggota Keluarga : \n";
    while (index < jumlahAnggota)
    {
        std::cout << "\nNama Anggota Keluarga Anda ke-" << index + 1 << " = ";
        std::getline(std::cin, Keluarga[index]);
        index++;
    }

    index = 0;
    std::string *ponterKeluarga = Keluarga;

    while (index < jumlahAnggota)
    {
        std::cout << "\nAnggota keluarga ke-" << index + 1 << " adalah " << *(ponterKeluarga + index);
        index++;
    }
    getch();
}