#include <iostream>
#include <string>

int main()
{
    std::string kata("cat");

    // * mengambil data string
    std::cout << kata << std::endl;

    // * mengambil karakter berdasarkan index
    std::cout << "Kata 1 : " << kata[0] << std::endl;
    std::cout << "Kata 2 : " << kata[1] << std::endl;
    std::cout << "Kata 3 : " << kata[2] << std::endl;

    // * merubah index kata
    kata[0] = 'b';
    std::cout << kata << std::endl;

    // * meyambung kata

    std::string kata2(kata + " country");
    std::cout << kata2 << std::endl;

    std::string kata3(" by avenged sevenfold");
    kata2.append(kata3);
    std::cout << kata2;

    return 0;
}