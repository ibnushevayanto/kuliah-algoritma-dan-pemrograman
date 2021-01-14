#include <iostream>
#include <string>

using namespace std;

int main()
{

    std::string keyword;
    std::string kata_rahasia("ucup");

    if (kata_rahasia == "ucup")
    {
        while (true)
        {
            std::cout << "\nTebak Nama-ku : ";
            std::cin >> keyword;

            if (keyword == kata_rahasia)
            {
                std::cout << "\nTebakan anda benar\n";
                break;
            }
            else
            {
                std::cout << "\nTebakan anda salah\n";
            }
        }
    }

    return 0;
}