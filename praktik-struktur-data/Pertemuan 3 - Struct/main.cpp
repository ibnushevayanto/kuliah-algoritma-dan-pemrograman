#include <iostream>

struct Mahasiswa
{
    std::string nama;
    std::string kelas;
};

void newLine()
{
    std::cout << std::endl;
}

int main()
{
    Mahasiswa daftar_mahassiwa[3];

    std::cout << "Masukkan nama mahasiswa : ";
    std::cin >> daftar_mahassiwa[0].nama;

    std::cout << "Masukkan kelas mahasiswa : ";
    std::cin >> daftar_mahassiwa[0].kelas;

    for (size_t i = 0; i < 3; i++)
    {   
        std::cout << "Nama : " << daftar_mahassiwa[i].nama << std::endl;
        std::cout << "Kelas : " << daftar_mahassiwa[i].kelas << std::endl << std::endl;
    }
    


    return 1;
}