#include <iostream>
#include <conio.h>

struct Mobil
{
    std::string Nama_Mobil, Merk_Mobil, Asal_Mobil;
    int Tahun_Produksi;
};

main()
{
    Mobil MobilKu;

    std::cout << "Input Data Mobil \n";
    std::cout << "\nNama Mobil = ";
    std::getline(std::cin, MobilKu.Nama_Mobil);
    std::cout << "Merk Mobil = ";
    std::getline(std::cin, MobilKu.Merk_Mobil);
    std::cout << "Asal Mobil = ";
    std::getline(std::cin, MobilKu.Asal_Mobil);
    std::cout << "Tahun Produksi Mobil = ";
    std::cin.ignore();
    std::cin >> MobilKu.Tahun_Produksi;

    std::cout << "\nTampil Data Mobil \n";
    std::cout << "\nNama Mobil = " << MobilKu.Nama_Mobil;
    std::cout << "\nMerk Mobil = " << MobilKu.Merk_Mobil;
    std::cout << "\nAsal Mobil = " << MobilKu.Asal_Mobil;
    std::cout << "\nTahun Produksi Mobil = " << MobilKu.Tahun_Produksi;

    getch();
}