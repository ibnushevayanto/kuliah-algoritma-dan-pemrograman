#include <iostream>
#include <conio.h>
using namespace std;

typedef struct node *simpul;
struct node
{
    char isi;
    simpul Next;
};

// Prototype function
void Sisip_Depan(simpul &L, char elemen);
void Sisip_Belakang(simpul &L, char elemen);
void Sisip_Tengah1(simpul &L, char elemen1, char elemen2);
void Sisip_Tengah2(simpul &L, char elemen1, char elemen2);
void Hapus_Depan(simpul &L);
void Hapus_Belakang(simpul &L);
void Hapus_Tengah(simpul &L, char elemen);
void Cetak(simpul L);

main()
{
    char huruf, huruf2;
    simpul L = NULL; // ? Pastikan Bahwa L Kosong
    cout << "==Operasi Pada Linked List==" << endl
         << endl;

    // Sisip Simpul Depan
    for (size_t i = 0; i < 4; i++)
    {
        cout << "Penyisipan Simpul Di Depan " << endl
             << endl;
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Depan(L, huruf);
    }
    Cetak(L);
    cout << endl;
    // Sisip Simpul Belakang
    for (size_t i = 0; i < 4; i++)
    {
        cout << "Penyisipan Simpul Di Belakang " << endl
             << endl;
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Belakang(L, huruf);
    }
    Cetak(L);

    // Sisip Simpul Setelah Simpul Tertentu
    cout << endl
         << endl
         << "Masukkan Huruf : ";
    cin >> huruf;
    cout << "Disisip Setelah Huruf : ";
    cin >> huruf2;
    Sisip_Tengah1(L, huruf, huruf2);
    Cetak(L);

    // Sisip Simpul Sebelum Simpul Tertentu
    cout << endl
         << endl
         << "Masukkan Huruf : ";
    cin >> huruf;
    cout << "Disisip Sebelum Huruf : ";
    cin >> huruf2;
    Sisip_Tengah2(L, huruf, huruf2);
    Cetak(L);

    // Hapus Simpul Depan
    cout << endl
         << endl
         << "Setelah Hapus Simpul Depan\n";
    Hapus_Depan(L);
    Cetak(L);
    cout << endl;

    // Hapus Simpul Belakang
    cout << endl
         << endl
         << "Setelah Hapus Simpul Belakang\n";
    Hapus_Belakang(L);
    Cetak(L);
    cout << endl;

    // Hapus Simpul Tengah
    cout << "\n\nMasukkan Huruf Tengah Yang Akan Dihapus : ";
    cin >> huruf;
    Hapus_Tengah(L, huruf);
    Cetak(L);

    getch();
}

void Sisip_Depan(simpul &L, char elemen)
{
    simpul baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen;
    baru->Next = NULL;
    if (L == NULL)
        L = baru;
    else
    {
        baru->Next = L;
        L = baru;
    }
}

void Sisip_Belakang(simpul &L, char elemen)
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

void Sisip_Tengah1(simpul &L, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen1;
    baru->Next = NULL;
    
    if (L == NULL)
        cout << "List Kosong...";
    else
    {
        bantu = L;
        while (bantu->isi != elemen2)
            bantu = bantu->Next;
        baru->Next = bantu->Next;
        bantu->Next = baru;
    }
}

void Sisip_Tengah2(simpul &L, char elemen1, char elemen2)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen1;
    baru->Next = NULL;

    if (L == NULL)
        cout << "List Kosong...";
    else
    {
        bantu = L;
        while (bantu->Next->isi != elemen2)
            bantu = bantu->Next;
        baru->Next = bantu->Next;
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
            cout << bantu->isi << "-->";
            bantu = bantu->Next;
        }
        cout << bantu->isi;
    }
}

void Hapus_Depan(simpul &L)
{
    simpul Hapus;
    if (L == NULL)
        cout << "Linked List Kosong...";
    else
    {
        Hapus = L;
        L = L->Next;
        Hapus->Next = NULL;
        free(Hapus);
    }
}

void Hapus_Belakang(simpul &L)
{
    simpul bantu, hapus;
    if (L == NULL)
        cout << "Linked List Kosong...";
    else
    {
        bantu = L;
        while (bantu->Next->Next != NULL)
            bantu = bantu->Next;
        hapus = bantu->Next;
        bantu->Next = NULL;
        free(hapus);
    }
}

void Hapus_Tengah(simpul &L, char elemen)
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