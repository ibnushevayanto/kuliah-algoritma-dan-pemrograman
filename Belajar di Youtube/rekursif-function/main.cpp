#include <iostream>

int pangkat(int nilai, int pangkat)
{
    int hasil = nilai;

    for (size_t i = 1; i < pangkat; i++)
    {
        hasil = hasil * nilai;
    }

    return hasil;
}

int pangkatRekursif(int nilai, int pangkat)
{
    if (pangkat <= 1)
    {
        return nilai;
    }
    else
    {
        return nilai * pangkatRekursif(nilai, (pangkat - 1));
    }
}

int faktorial(int nilai)
{

    if (nilai <= 1)
    {
        return nilai;
    }
    else
    {
        return nilai * faktorial(nilai - 1);
    }
}

int main()
{
    int nilai, nilaiPangkat;

    std::cout << "Masukkan nilai : ";
    std::cin >> nilai;

    // std::cout << "Masukkan pangkat : ";
    // std::cin >> nilaiPangkat;

    // std::cout << "Hasil dari " << nilai << " Pangkat " << nilaiPangkat << " = " << pangkat(nilai, nilaiPangkat) << std::endl;

    // std::cout << "Hasil dari " << nilai << " Pangkat " << nilaiPangkat << " = " << pangkatRekursif(nilai, nilaiPangkat) << std::endl;

    std::cout << "Hasil faktorial " << nilai << " = " << faktorial(nilai) << std::endl;

    return 0;
}