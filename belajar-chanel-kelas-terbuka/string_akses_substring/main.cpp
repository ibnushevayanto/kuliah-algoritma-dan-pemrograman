#include <iostream>
#include <string>

int main()
{
    std::string kalimat_1("Dayat suka olahraga supaya sehat");
    std::string kalimat_2("Ucup suka makan pisang di pagi hari");

    std::cout << "1. " << kalimat_1 << std::endl;
    std::cout << "2. " << kalimat_2 << std::endl;

    // ? substring, mengambil string ditengah - tengah
    // ? substr(11, 8); 11 = start indexnya, 8 adalah jumlah katanya
    std::cout << std::endl
              << kalimat_1.substr(11, 8) << " " << kalimat_2.substr(16, 6) << std::endl;

    // ? find string
    std::cout << "Posisi \"olahraga\" pada kalimat ke 1 : " << kalimat_1.find("olahraga") << std::endl;
    std::cout << "Posisi \"pisang\" di kalimat ke 2: " << kalimat_2.find("pisang") << std::endl;

    int a = kalimat_1.find("ya");
    std::cout << a << std::endl;
    std::cout << kalimat_1.find("ya", a + 1) << std::endl;

    // ? mencari dari index belakang
    std::cout << kalimat_1.rfind("ya") << std::endl;

    return 0;
}