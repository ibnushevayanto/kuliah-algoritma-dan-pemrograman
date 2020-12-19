#include <iostream>
#include <string>

int main()
{
    std::string kata("Ibnu Shevayanto");
    // ! std::cout << kata << std::endl;

    std::string kalimat;

    std::cout << "Masukkan kalimat : ";
    std::getline(std::cin, kalimat);
    std::cout << "Kalimat yang anda masukkan adalah " << kalimat;

    return 0;
}