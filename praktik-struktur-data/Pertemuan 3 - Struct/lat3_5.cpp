#include <iostream>
#include <conio.h>

struct Nilai
{
    std::string Nim;
    std::string Nama;
    int Nilai_Tugas, Nilai_UTS, Nilai_UAS, Nilai_Akhir;
    char Nilai_Huruf;
};

int getNilaiAkhir(int Nilai_Tugas, int Nilai_UTS, int Nilai_UAS)
{
    int jumlahNilaiTugas = (float)20 / 100 * Nilai_Tugas;
    int jumlahNilaiUTS = (float)35 / 100 * Nilai_UTS;
    int jumlahNilaiUAS = (float)45 / 100 * Nilai_UAS;

    return jumlahNilaiTugas + jumlahNilaiUTS + jumlahNilaiUTS;
};

char getNilaiHuruf(int Nilai_Akhir)
{
    if (Nilai_Akhir >= 85)
        return 'A';
    else if (Nilai_Akhir >= 70)
        return 'B';
    else if (Nilai_Akhir >= 55)
        return 'C';
    else if (Nilai_Akhir >= 40)
        return 'D';
    else
        return 'E';
}

main()
{
    int jumlah_data, index;
    std::cout << "Jumlah data yang ingin diinput ? ";
    std::cin >> jumlah_data;
    std::cin.ignore();

    Nilai Mhs[jumlah_data];

    std::cout << "\nInput Data : \n";
    for (index = 0; index < jumlah_data; index++)
    {
        std::cout << "\nNama = ";
        std::getline(std::cin, Mhs[index].Nama);
        std::cout << "Nim = ";
        std::getline(std::cin, Mhs[index].Nim);
        std::cout << "Nilai Tugas = ";
        std::cin >> Mhs[index].Nilai_Tugas;
        std::cout << "Nilai UTS = ";
        std::cin >> Mhs[index].Nilai_UTS;
        std::cout << "Nilai UAS = ";
        std::cin >> Mhs[index].Nilai_UAS;
        std::cin.ignore();
        Mhs[index].Nilai_Akhir = getNilaiAkhir(Mhs[index].Nilai_Tugas, Mhs[index].Nilai_UTS, Mhs[index].Nilai_UAS);
        Mhs[index].Nilai_Huruf = getNilaiHuruf(Mhs[index].Nilai_Akhir);
    }

    std::cout << "\nTampil Data :";
    for (index = 0; index < jumlah_data; index++)
    {
        std::cout << "\n\nNama = " << Mhs[index].Nama;
        std::cout << "\nNim = " << Mhs[index].Nim;
        std::cout << "\nNilai Tugas = " << Mhs[index].Nilai_Tugas;
        std::cout << "\nNilai UTS = " << Mhs[index].Nilai_UTS;
        std::cout << "\nNilai UAS = " << Mhs[index].Nilai_UAS;
        std::cout << "\nNilai Akhir = " << Mhs[index].Nilai_Akhir;
        std::cout << "\nNilai Huruf = " << Mhs[index].Nilai_Huruf;
    }

    getch();
}