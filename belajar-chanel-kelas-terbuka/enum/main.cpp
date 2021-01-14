#include <iostream>

enum warna
{
    merah,
    putih,
    hitam,
    coklat,
    kuning,
    biru
};

int main()
{
    warna kain;
    kain = putih;

    if (kain == merah)
        std::cout << "Kain Berwarna merah " << std::endl;

        std::cout << "Nilai warna merah : " << merah << std::endl;
    return 0;
}