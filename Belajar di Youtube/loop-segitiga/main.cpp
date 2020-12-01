#include <iostream>

void barisBaru()
{
    std::cout << std::endl;
}

int main()
{
    int n;

    std::cout << "Masukan panjang pola : ";
    std::cin >> n;

    std::cout << "Pola " << n << std::endl
              << std::endl;

    for (size_t indexBaris = 1; indexBaris <= n; indexBaris++)
    {
        for (size_t indexKolom = 1; indexKolom <= indexBaris; indexKolom++)
        {
            std::cout << "*";
        }
        barisBaru();
    }

    barisBaru();
    barisBaru();

    for (size_t indexBaris = 1; indexBaris <= n; indexBaris++)
    {
        for (size_t indexKolom = n; indexKolom >= indexBaris; indexKolom--)
        {
            std::cout << "*";
        }
        barisBaru();
    }

    barisBaru();
    barisBaru();

    for (size_t indexBaris = 1; indexBaris <= n; indexBaris++)
    {
        for (size_t indexKolomSpasi = 1; indexKolomSpasi <= n - indexBaris; indexKolomSpasi++)
        {
            std::cout << " ";
        }
        for (size_t indexKolomBintang = n; indexKolomBintang + indexBaris > n; indexKolomBintang--)
        {
            std::cout << "*";
        }
        barisBaru();
    }

    barisBaru();
    barisBaru();

    for (size_t indexBaris = 1; indexBaris <= n; indexBaris++)
    {
        for (size_t indexSpasi = 1; indexSpasi <= indexBaris; indexSpasi++)
        {
            std::cout << " ";
        }
        for (size_t indexBintang = n; indexBintang >= indexBaris; indexBintang--)
        {
            std::cout << "*";
        }

        barisBaru();
    }

    barisBaru();
    barisBaru();

    for (size_t indexBaris = 1; indexBaris <= n; indexBaris++)
    {
        for (size_t indexKolomSpasi = 1; indexKolomSpasi <= n - indexBaris; indexKolomSpasi++)
        {
            std::cout << " ";
        }
        for (size_t indexKolomBintang = n; indexKolomBintang + indexBaris > n; indexKolomBintang--)
        {
            std::cout << "*";
        }
        barisBaru();
    }

    return 0;
}