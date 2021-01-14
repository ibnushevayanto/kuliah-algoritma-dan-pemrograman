#include <iostream>
#include <string>

class DataMahasiswa
{
private:
    std::string nama;
    char nim[15];
    char kode_kelas[15];
    std::string mata_kuliah;
    std::string nama_dosen;

public:
    void inputData()
    {
        std::cout << "\n==========Input Form===========" << std::endl;
        inputNama();
        inputNim();
        inputKodeKelas();
        inputMataKuliah();
        inputNamaDosen();
        std::cout << "===============================" << std::endl;
    }
    void inputNama()
    {
        std::cout << "Input Nama : ";
        getline(std::cin, nama);
    }
    void inputNim()
    {
        std::cout << "Input NIM : ";
        std::cin.getline(nim, 15);
    }
    void inputKodeKelas()
    {
        std::cout << "Input Kode Kelas : ";
        std::cin.getline(kode_kelas, 15);
    }
    void inputMataKuliah()
    {
        std::cout << "Input Mata Kuliah : ";
        getline(std::cin, mata_kuliah);
    }
    void inputNamaDosen()
    {
        std::cout << "Input Nama Dosen : ";
        getline(std::cin, nama_dosen);
    }
    void showResult()
    {
        std::cout << "\n==========Hasil===========" << std::endl;
        std::cout << "Nama : " << nama << std::endl;
        std::cout << "NIM : " << nim << std::endl;
        std::cout << "Kode Kelas : " << kode_kelas << std::endl;
        std::cout << "Mata Kuliah : " << mata_kuliah << std::endl;
        std::cout << "Nama Dosen : " << nama_dosen << std::endl;
        std::cout << "==========================" << std::endl;
    }
};

const int max_data = 3;
DataMahasiswa stack[max_data];
int jumlah_data = 0;

void printAllData();
void pushData();

int main()
{
    int command;
    std::cout << "\n1. Tambahkan data"
              << "\n2. Lihat semua data yang sudah ditambahkan"
              << "\n3. Exit \n\n";
    while (true)
    {
        std::cout << "\nMasukkan Perintah : ";
        std::cin >> command;
        std::cin.ignore();
        if (command == 1)
        {
            pushData();
        }
        else if (command == 2)
        {
            printAllData();
        }
        else if (command == 3)
        {
            std::cout << "Proses keluar dari aplikasi";
            break;
        }
        else
        {
            std::cout << "Perintah anda tidak dikenal !!! (automatis keluar aplikasi)";
            break;
        }
    }

    return 0;
}

void pushData()
{
    if (jumlah_data == max_data)
    {
        std::cout << "\n Stack Sudah Penuh !!!" << std::endl;
    }
    else
    {
        stack[jumlah_data].inputData();
        std::cout << "Berhasil menginput data pada index ke " << jumlah_data << std::endl;
        jumlah_data++;
    }
}


void printAllData()
{
    if (jumlah_data == 0)
    {
        std::cout << "\nData Masih Kosong" << std::endl;
    }
    else
    {
        for (size_t i = 0; i < jumlah_data; i++)
        {
            stack[i].showResult();
        }
    }
}
