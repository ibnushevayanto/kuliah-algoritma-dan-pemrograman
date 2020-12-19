#include <iostream>

int main()
{
    int a = 5;
    // int a mempunyai nilai dan address(alamat)

    // pointer
    int *aPtr = nullptr;
    aPtr = &a;

    std::cout << "Nilai dari a = " << a << std::endl;
    std::cout << "Address dari a = " << aPtr << std::endl;

    // derefrencing, mengambil data dari sebuah pointer
    *aPtr = 20;
    std::cout << "Mengambil nilai dari pointer aPtr = " << *aPtr << std::endl;

    std::cout << "Nilai dari a = " << a << std::endl;

    // * membuat alamat
    int *alamat_int;
    alamat_int = new int;
    std::cout << "Alamat alamat_int : " << alamat_int << std::endl;

    return 0;
}