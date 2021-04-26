#include <iostream>
#include <conio.h>

struct Mobil
{
    std::string Nama_Mobil, Merk_Mobil, Asal_Mobil;
    int Tahun_Produksi;
};

main()
{
    int jumlah_mobil, index;

    std::cout << "Masukkan Jumlah Mobil Anda = ";
    std::cin >> jumlah_mobil;
    std::cin.ignore();

    Mobil MobilKu[jumlah_mobil];

    std::cout << "Input Data Mobil \n";
    for (index = 0; index < jumlah_mobil; index++)
    {
        std::cout << "\nNama Mobil = ";
        std::getline(std::cin, MobilKu[index].Nama_Mobil);
        std::cout << "Merk Mobil = ";
        std::getline(std::cin, MobilKu[index].Merk_Mobil);
        std::cout << "Asal Mobil = ";
        std::getline(std::cin, MobilKu[index].Asal_Mobil);
        std::cout << "Tahun Produksi Mobil = ";
        std::cin.ignore();
        std::cin >> MobilKu[index].Tahun_Produksi;
        std::cin.ignore();
    }

    std::cout << "\nTampil Data Mobil";
    for (index = 0; index < jumlah_mobil; index++)
    {
        std::cout << "\n\nNama Mobil = " << MobilKu[index].Nama_Mobil;
        std::cout << "\nMerk Mobil = " << MobilKu[index].Merk_Mobil;
        std::cout << "\nAsal Mobil = " << MobilKu[index].Asal_Mobil;
        std::cout << "\nTahun Produksi Mobil = " << MobilKu[index].Tahun_Produksi;
    }

    getch();
}