#include <iostream>

void fungsi(int &);
void pangkat(int &);

int main()
{
    int a = 5;

    std::cout << "Address dari a : " << &a << std::endl;
    std::cout << "Nilai dari a : " << a << std::endl;

    fungsi(a);
    pangkat(a);

    std::cout << "Nilai dari a : " << a << std::endl;

    return 0;
}

void fungsi(int &a)
{
    std::cout << "Address dari a : " << &a << std::endl;
    std::cout << "Nilai dari a : " << a << std::endl;
}

void pangkat(int &nilaiPangkat)
{
    nilaiPangkat = nilaiPangkat * nilaiPangkat;
}