#include <iostream>
#include <string>

int main()
{
    std::string kalimat_input;

    std::cout << "\nMohon input sesuatu : ";
    std::getline(std::cin, kalimat_input);
    std::cout << kalimat_input << std::endl;

    int posisi = 0;
    int jumlah_kalimat = 0;

    while (true)
    {
        jumlah_kalimat++;
        posisi = kalimat_input.find(" ", posisi + 1);

        if (posisi < 0)
        {
            break;
        }
    }

    std::cout << "\nAnda menginput " << jumlah_kalimat << " kalimat" << std::endl;

    return 0;
}