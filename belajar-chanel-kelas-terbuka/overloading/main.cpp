#include <iostream>

int luas_kotak(int panjang, int lebar)
{
    return panjang * lebar;
}

int luas_kotak(int sisi)
{
    return sisi * sisi;
}

double luas_kotak(double sisi)
{
    return sisi * sisi;
}

int main()
{
    std::cout << "luas kotak 2 x 3 = " << luas_kotak(2, 3) << std::endl;
    std::cout << "luas persegi 2 x 2 = " << luas_kotak(2) << std::endl;
    std::cout << "luas persegi 2.5 x 2.5 = " << luas_kotak(2.5) << std::endl;
    return 0;
}