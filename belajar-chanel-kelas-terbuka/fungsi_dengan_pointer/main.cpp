#include <iostream>

void fungsi(int *);
void fungsiPangkat(int *);

int main()
{
    int a = 5;

    std::cout << "Nilai dari a = " << a << std::endl;
    std::cout << "Alamat dari a = " << &a << std::endl;

    fungsi(&a);
    fungsiPangkat(&a);

    std::cout << "Nilai pangkat = " << a << std::endl;
    std::cout << "Address pangkat = " << &a << std::endl;

    return 0;
}

// * Parameter tidak mempengaruhi variable di main
void fungsi(int *a)
{
    std::cout << "Nilai dari a = " << *a << std::endl;
    std::cout << "Alamat dari a = " << a << std::endl;
}

void fungsiPangkat(int *nilai)
{
    *nilai = *nilai * *nilai;
}