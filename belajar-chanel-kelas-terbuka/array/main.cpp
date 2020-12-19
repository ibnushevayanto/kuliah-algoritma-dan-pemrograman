#include <iostream>
#include <array>

int main()
{
    // * membuat array dengan standart library
    // ! array <int,jumlah_array> nama_array
    std::array<int, 5> nilai;

    for (int index = 0; index < 5; index++)
    {
        nilai[index] = index;
        std::cout << "nilai"
                  << "[" << index << "] = " << index << " address : " << &nilai[index] << std::endl;
    }

    // ? ukuran array
    std::cout << "Ukuran array niali = " << nilai.size() << std::endl;

    // ? address awal
    std::cout << "Address awal array " << nilai.begin() << std::endl;

    // ? address akhir array
    std::cout << "Address akhir array " << nilai.end() << std::endl;

    // ? mengambil nilai index
    std::cout << "Nilai index ke-2 = " << nilai.at(2) << std::endl;

    return 0;
}