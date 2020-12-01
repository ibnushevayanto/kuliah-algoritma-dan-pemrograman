#include <iostream>

int main()
{

    int n, f_n = 0, f_n1 = 1, f_n2 = 0;

    std::cout << "Program Deret Fibonacci \n";
    std::cout << "Masukkan Nilai : ";
    std::cin >> n;

    f_n = 0;
    f_n1 = 1;
    f_n2 = 0;

    for (int index = 0; index < n; index++)
    {
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
        std::cout << f_n << std::endl;
    }

    return 0;
}