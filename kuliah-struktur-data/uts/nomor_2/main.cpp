#include <iostream>
#include <string>

class DataMahasiswa
{
private:
    std::string nama;
    char nim[15];

public:
    void inputData()
    {
        std::cout << "==========Input Form===========" << std::endl;
        inputNama();
        inputNim();
        std::cout << "===============================" << std::endl;
    }
    void inputNama()
    {
        std::cout << "Input Nama Anda : ";
        getline(std::cin, nama);
    }
    std::string getNama()
    {
        return nama;
    }
    void inputNim()
    {
        std::cout << "Input NIM Anda : ";
        std::cin.getline(nim, 15);
    }
    void showResult()
    {
        std::cout << "==========Hasil===========" << std::endl;
        std::cout << "Nama : " << nama << std::endl;
        std::cout << "NIM : " << nim << std::endl;
        std::cout << "==========================" << std::endl;
    }
};

const int max_data = 3;
DataMahasiswa stack[max_data];
int jumlah_data = 0;

void printAllData();
void pushData();
void popData();
void clearData();

int main()
{
    int command;
    bool run_app;
    std::cout << "\n1. Push"
              << "\n2. Pop"
              << "\n3. Print All Data"
              << "\n4. Clear"
              << "\n5. Exit \n\n";
    while (true)
    {
        std::cout << "Masukkan Perintah : ";
        std::cin >> command;
        std::cin.ignore();
        if (command == 1)
        {
            pushData();
        }
        else if (command == 3)
        {
            printAllData();
        }
        else if (command == 2)
        {
            popData();
        }
        else if (command == 4)
        {
            clearData();
        }
        else if (command == 5)
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

void clearData()
{
    std::cout << "\n Berhasil clear semua data" << std::endl;
    jumlah_data = 0;
}

void popData()
{
    if (jumlah_data == 0)
    {
        std::cout << "Stack Masih Kosong !!!" << std::endl;
    }
    else
    {
        std::cout << stack[jumlah_data - 1].getNama() << " Diambil" << std::endl;
        stack[jumlah_data--];
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
