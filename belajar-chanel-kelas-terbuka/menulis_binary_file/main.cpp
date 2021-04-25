#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::fstream file, readfile;
    int number = 1, hasil;

    file.open("data.bin", std::ios::out | std::ios::binary);
    // ? reinterpret_cast berguna untuk mengumabh angka menjadi karakter
    file.write(reinterpret_cast<char*>(&number), sizeof(number));
    file.close();

    readfile.open("data.bin", std::ios::in | std::ios::binary);
    readfile.read(reinterpret_cast<char*>(&hasil), sizeof(hasil));
    
    std::cout << "Besar Integer : " << sizeof(hasil) << std::endl;
    std::cout << "Hasil : " << hasil << std::endl;

    return 0;
}