#include <iostream>
#include <string>

const int max_aktor = 100;

struct aktor
{
    std::string nama;
    int tahun_lahir;
};

struct film
{
    std::string judul;
    std::string genre;
    int tahun;
    aktor pemeran[max_aktor];
};

int main()
{
    aktor pemeran_film[max_aktor];
    film film_input;
    int jumlah_aktor, menu;

    std::cout << "\nSelamat datang di aplikasi input data film" << std::endl;
    std::cout << "\nMENU\n 1.Input Data\n 2.Lihat Data\n 3.Keluar Aplikasi " << std::endl;

    while (true)
    {
        std::cout << "\nMasukkan Perintah : ";
        std::cin >> menu;
        std::cin.ignore();

        if (menu == 1)
        {
            std::cout << "\nJudul Film : ";
            std::getline(std::cin, film_input.judul);
            std::cout << "Genre Film : ";
            std::getline(std::cin, film_input.genre);
            std::cout << "Tahun RIlis Film : ";
            std::cin >> film_input.tahun;
            std::cout << "Jumlah aktor yang ingin anda input : ";
            std::cin >> jumlah_aktor;

            std::cin.ignore();

            for (size_t i = 0; i < jumlah_aktor; i++)
            {
                std::cout << "Nama Aktor " << i + 1 << " : ";
                std::getline(std::cin, pemeran_film[i].nama);

                std::cout << "Tahun Lahir Aktor " << i + 1 << " : ";
                std::cin >> pemeran_film[i].tahun_lahir;

                std::cin.ignore();

                film_input.pemeran[i] = pemeran_film[i];
            }
        }
        else if (menu == 2)
        {
            std::cout << "\nData Film Yang Telah Diinput" << std::endl;
            std::cout << "Judul Film : " << film_input.judul << std::endl;
            std::cout << "Genre Film : " << film_input.genre << std::endl;
            std::cout << "Tahun RIlis Film : " << film_input.tahun << std::endl;
            std::cout << "Jumlah Aktor : " << jumlah_aktor << std::endl;

            std::cout << "\nDaftar Aktor : ";
            for (size_t i = 0; i < jumlah_aktor; i++)
            {
                std::cout << "\n"
                          << i + 1 << ". Data Aktor" << std::endl;
                std::cout << "Nama Pemeran : " << film_input.pemeran[i].nama << std::endl;
                std::cout << "Tahun Lahir Pemeran : " << film_input.pemeran[i].tahun_lahir << std::endl;
            }
        }
        else if (menu == 3)
        {
            std::cout << "\nKeluar aplikasi !!!" << std::endl;
            break;
        }
    }

    return 0;
}