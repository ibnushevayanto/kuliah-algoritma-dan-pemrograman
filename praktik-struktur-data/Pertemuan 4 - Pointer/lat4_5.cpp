#include <iostream>
#include <conio.h>

main()
{
    std::string Tetangga[] = {"Pak Nyoto", "Pak Dono", "Pak Kasino", "Pak Indro", "Pak Said"};
    std::string *pointerTetangga = Tetangga;
    int index = 0;

    while (index < 5)
    {
        std::cout << *(pointerTetangga + index) << std::endl;
        index++;
    }

    getch();
}