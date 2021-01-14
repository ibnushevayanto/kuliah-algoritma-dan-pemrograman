#include <iostream>
#include <string>

void printData(char nilai, int value)
{
    std::cout << "\nNilai " << nilai << " : " << value << std::endl;
}

int main()
{
    int a, b, c, d;

    // * variable a, akan selalu mengambil nilai comma operator yang paling akhir sebagai value
    a = (b = 1, printData('b', b), c = 2, printData('c', c), (b + c));

    std::cout << "\nnilai a : " << a << std::endl;

    return 0;
}
