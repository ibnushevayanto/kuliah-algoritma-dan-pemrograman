#include <iostream>
#include <fstream> // ofstream(output file), ifstream(input file), fstream(campuran input dan output)
#include <string>

int main()
{
    std::ofstream inputFile;
    std::ifstream readFile;
    std::string output, bufferData, nama, no;
    bool is_data;

    // * Input File

    // ios::out = default, operasi output
    // ios::app = menuliskan pada akhir baris
    // ios::trunc = membuat file jika ada, dan kalau tidak ada akan dihapus

    inputFile.open("data1.txt", std::ios::trunc);
    inputFile << "ini adalah file external.\ndan ini adalah baris ke-dua\n\ndata\nNo  Nama\n1   Ibnu\n2   Gempi\n3   Gisel\n4   Gading";
    inputFile.close();

    // readFile >> data; // * output ini

    // * End Input File

    // * Read File

    // ios::in = mulai dari awal file (default)
    // ios::ate = mulai dari akhir file 
    // ios::binary = membaca file biner
    readFile.open("data1.txt");

    // getline(readFile, bufferData);
    // output.append("\n" + bufferData);
    // getline(readFile, bufferData);
    // output.append("\n" + bufferData);

    while(!is_data){
        getline(readFile, bufferData);
        output.append("\n" + bufferData);
        if(bufferData == "data"){
            is_data = true;
        }
    }

    std::cout << output << std::endl;

    getline(readFile, bufferData);

    int jumlah_data = 0;
    while(!readFile.eof()){
        readFile >> no;
        readFile >> nama;

        std::cout << "no : " << no << " nama : " << nama << std::endl;
        jumlah_data++;
    }

    std::cout << "Jumlah data : " << jumlah_data;

    return 0;
}