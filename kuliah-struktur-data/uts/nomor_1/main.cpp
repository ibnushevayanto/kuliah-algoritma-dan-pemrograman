#include <iostream>
#include <string>

class DataMahasiswa
{
private:
    std::string nama;
    std::string nim;

public:
    DataMahasiswa()
    {
        inputNama();
        inputNim();
    }
    void inputNama()
    {
        std::cout << "Input Nama Anda : ";
        getline(std::cin, nama);
    }
    void inputNim()
    {
        std::cout << "Input NIM Anda : ";
        getline(std::cin, nim);
    }
    void showResult()
    {
        std::cout << "==========Hasil===========" << std::endl;
        std::cout << "Nama : " << nama << std::endl;
        std::cout << "NIM : " << nim << std::endl;
    }
};

int main()
{
    std::cout << "==========Program Start===========" << std::endl;
    DataMahasiswa mahasiswa1;
    mahasiswa1.showResult();
    std::cout << "==========Program End===========" << std::endl;
    return 0;
}