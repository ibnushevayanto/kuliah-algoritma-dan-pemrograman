#include <iostream>
#include "./components/BelahKetupat.o"
#include "./components/SegitigaSikuSiku.o"
#include "./components/SegitigaSamaSisi.o"

int main()
{
    std::cout << "Belah Ketupat\n";
    belahKetupat(5);
    std::cout << "Segitiga Siku Siku\n";
    segitigaSikuSiku(5);
    std::cout << "Segitiga Sama Sisi\n";
    segitigaSamaSisi(5);
}