#include <iostream>
#include <array>

int main()
{
    std::array<int, 10> nilai;

    int nilai_awal, nilai_akhir;

    for (size_t i = 0; i < nilai.size(); i++)
    {

        nilai_awal = i == 0 ? 0 : i * 10;
        nilai_akhir = i == 0 ? 0 + 9 : i == (nilai.size() - 1) ? 100 : (i * 10) + 9;

        std::cout << "nilai mahasiswa " << nilai_awal << " - " << nilai_akhir << " : ";
        std::cin >> nilai[i];
    }

    std::cout << std::endl
              << "========================================" << std::endl;
    std::cout << "Grafik nilai" << std::endl;
    std::cout << "========================================" << std::endl;
    for (size_t i = 0; i < nilai.size(); i++)
    {
        nilai_awal = i == 0 ? 0 : i * 10;
        nilai_akhir = i == 0 ? 0 + 9 : i == (nilai.size() - 1) ? 100 : (i * 10) + 9;

        std::cout << "nilai mahasiswa " << nilai_awal << " - " << nilai_akhir << " :  ";

        for (size_t indexBintang = 0; indexBintang < nilai[i]; indexBintang++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    std::cout << "========================================" << std::endl;

    return 0;
}