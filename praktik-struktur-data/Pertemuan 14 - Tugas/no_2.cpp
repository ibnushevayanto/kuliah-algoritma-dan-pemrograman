// ! Progam Linked List Untuk Cetak Data
#include <iostream>
#include <conio.h>
using namespace std;

typedef struct node *simpul;
struct node
{
    char isi;
    simpul Next;
};

void Sisip(simpul &L, char elemen);
void Cetak(simpul L);
void Hapus(simpul &L, char elemen);

main()
{
    int n;
    char huruf;
    simpul L = NULL;

    cout << "Masukkan Jumlah Data Yang Ingin Anda Sisipkan : ";
    cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip(L, huruf);
    }
    Cetak(L);

    cout << "\n\nMasukkan Huruf Tengah Yang Akan Dihapus : ";
    cin >> huruf;
    cout << "\nHuruf " << huruf << " Berhasil Dihapus!" << endl;
    Hapus(L, huruf);
    Cetak(L);

    getch();
}

void Sisip(simpul &L, char elemen)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen;
    baru->Next = NULL;
    if (L == NULL)
        L = baru;
    else
    {
        bantu = L;
        while (bantu->Next != NULL)
            bantu = bantu->Next;
        bantu->Next = baru;
    }
}

void Cetak(simpul L)
{
    simpul bantu;
    if (L == NULL)
        cout << "Linked List Kosong..." << endl;
    else
    {
        bantu = L;
        cout << "Isi Linked List : ";
        while (bantu->Next != NULL)
        {
            cout << bantu->isi << " ";
            bantu = bantu->Next;
        }
        cout << bantu->isi;
    }
}

void Hapus(simpul &L, char elemen)
{
    simpul bantu, hapus;
    if (L == NULL)
        cout << "Linked List Kosong...";
    else
    {
        bantu = L;
        while (bantu->Next->isi != elemen)
            bantu = bantu->Next;
        hapus = bantu->Next;
        bantu->Next = bantu->Next->Next;
        hapus->Next = NULL;
        free(hapus);
    }
}