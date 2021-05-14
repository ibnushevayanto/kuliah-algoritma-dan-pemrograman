#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

typedef struct node *simpul;

struct node
{
    char isi;
    simpul next;
};

void Sisip_Belakang(simpul &L, char elemen);
void Hapus_Belakang(simpul &L);
void Cetak(simpul L);

main()
{
    char huruf;
    simpul L = NULL;
    cout << "Operasi Single Linked List Pada Stack==\n\n";

    cout << endl
         << endl
         << "Penyiapan Stack" << endl
         << endl;

    // ? Sisip Belakang
    for (int index = 0; index < 6; index++)
    {
        cout << "Masukan elemen : ";
        cin >> huruf;
        Sisip_Belakang(L, huruf);
    }
    Cetak(L);

    // ? Hapus Simpul Belakang
    for (int index = 0; index < 4; index++)
    {
        cout << endl
             << endl
             << "Hapus Elemen " << endl;
        Hapus_Belakang(L);
        Cetak(L);
    }

    getch();
}

// ? Function Sisip Simpul Di Belakang
void Sisip_Belakang(simpul &L, char elemen)
{
    simpul bantu, baru;
    baru = (simpul)malloc(sizeof(simpul));
    baru->isi = elemen;
    baru->next = NULL;

    if (L == NULL)
    {   
        baru->next = baru;
        L = baru;
    }
    else
    {
        bantu = L;
        while (bantu->next != NULL)
        {
            bantu = bantu->next;
            bantu->next = baru;
        }
    }
}

// ? Hapus Simpul Belakang
void Hapus_Belakang(simpul &L)
{
    simpul bantu, hapus;
    if (L == NULL)
    {
        cout << "Linked List Kosong....";
    }
    else
    {
        bantu = L;
        while (bantu->next->next != NULL)
        {
            bantu = bantu->next;
            hapus = bantu->next;
            bantu->next = NULL;
        }
        free(hapus);
    }
}

void Cetak(simpul L)
{
    simpul bantu;
    if (L == NULL)
    {
        cout << "Linked List Kosong..." << endl;
    }
    else
    {
        bantu = L;
        cout << endl
             << "Isi Linked List" << endl;
        while (bantu->next != NULL)
        {
            cout << bantu->isi << "->";
            bantu = bantu->next;
        }
        cout << bantu->isi;
    }
}