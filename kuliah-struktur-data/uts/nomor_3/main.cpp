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
        std::cout << "\n";
        inputNama();
        inputNim();
        std::cout << "\n";
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
        std::cout << "\nNama : " << nama << std::endl;
        std::cout << "NIM : " << nim << std::endl;
    }
};

const int max_data = 3;
DataMahasiswa data_mahasiswa[max_data];
int head = -1;
int tail = -1;

bool isEmpty();
bool isFull();
void antrianMasuk();
void antrianKeluar();
void showAllDataMasuk();
void clear();

int main()
{
    int command;
    bool run_app;
    std::cout << "\n1. Tambah Antrian"
              << "\n2. Panggil Antrian"
              << "\n3. Lihat Daftar Yang Sedang Menunggu"
              << "\n4. Clear Data"
              << "\n5. Exit \n\n";
    while (true)
    {
        std::cout << "\nMasukkan Perintah : ";
        std::cin >> command;
        std::cin.ignore();
        if (command == 5)
        {
            std::cout << "\nKeluar Aplikasi";
            break;
        }
        else if (command == 1)
        {
            if (isFull())
            {
                std::cout << "\nAntrian sudah penuh !!!\n";
            }
            else
            {
                antrianMasuk();
            }
        }
        else if (command == 2)
        {
            antrianKeluar();
        }
        else if (command == 3)
        {
            showAllDataMasuk();
        }
        else if (command == 4)
        {
            clear();
        }
        else
        {
            std::cout << "\nPerintah yang anda masukkan tidak valid";
            break;
        }
    }

    return 0;
}

bool isEmpty()
{
    if (tail == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isFull()
{
    if (tail == max_data - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void antrianMasuk()
{
    if (isEmpty())
    {
        head = 0;
        tail = 0;
    }
    else
    {
        tail++;
    }
    data_mahasiswa[tail].inputData();
}

void antrianKeluar()
{
    if (isEmpty())
    {
        std::cout << "\nAntrian sudah kosong ! \n";
    }
    else
    {
        std::cout << "\nUntuk data ini silahkan masuk ke ruang prodi : \n";

        data_mahasiswa[0].showResult();

        for (int a = head; a < tail; a++)
        {
            data_mahasiswa[a] = data_mahasiswa[a + 1];
        }
        tail--;
        if (tail == -1)
        {
            head = -1;
        }
    }
}

void clear()
{
    std::cout << "\nData berhasil diclear\n";
    head = tail = -1;
}

void showAllDataMasuk()
{
    if (isEmpty())
    {
        std::cout << "\nAntrian kosong ! \n";
    }
    else
    {
        for (int a = head; a <= tail; a++)
        {
            data_mahasiswa[a].showResult();
        }
    }
}