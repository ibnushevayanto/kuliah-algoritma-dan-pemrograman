#include <iostream>
#include <string>

struct buah
{
    std::string warna;
    float berat;
    int harga;
    std::string rasa;
};

int main()
{
    buah apel;

    apel.warna = "merah";
    apel.berat = 0.5;
    apel.harga = 3000;
    apel.rasa = "manis";

    std::cout << apel.warna << std::endl;
    std::cout << apel.berat << std::endl;
    std::cout << apel.harga << std::endl;
    std::cout << apel.rasa << std::endl;

    return 0;
}