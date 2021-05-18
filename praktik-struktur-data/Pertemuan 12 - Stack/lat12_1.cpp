#include <iostream>
#include <conio.h>
using namespace std;

struct node
{
    char isi;
    struct node *next;
};

void Sisip_Belakang(struct node **simpul, char elemen);
void Hapus_Belakang(struct node **simpul);
void Cetak(struct node *simpul);

main()
{
    char huruf;
    struct node *L = NULL;

    cout << "Operasi Single Linked List Pada Stack ==\n\n";

    // ! Sisip Belakang

    cout << endl
         << endl
         << "Penyisipan Stack" << endl
         << endl;

    for (size_t i = 0; i < 6; i++)
    {
        cout << "Masukkan Elemen : ";
        cin >> huruf;
        Sisip_Belakang(&L, huruf);
    }
    Cetak(L);

    // ! Hapus Simpul Belakang
    for (size_t i = 0; i < 4; i++)
    {
        cout << endl
             << endl
             << "Hapus Elemen" << endl;
        Hapus_Belakang(&L);
        Cetak(L);
    }

    getch();
}

void Sisip_Belakang(struct node **simpul, char elemen)
{
    struct node *last = *simpul;
    struct node *baru = new node;
    baru->isi = elemen;
    baru->next = NULL;

    if (*simpul == NULL)
        (*simpul) = baru;
    else
    {
        while (last->next != NULL)
            last = last->next;
        last->next = baru;
    }
}

void Hapus_Belakang(struct node **simpul)
{
    struct node *last = *simpul;
    struct node *hapus = new node;

    if (*simpul == NULL)
        cout << "Linked List Kosong...";
    else
    {
        while (last->next->next != NULL)
            last = last->next;
        hapus = last->next;
        last->next = NULL;
    }
}

void Cetak(struct node *simpul)
{
    if (simpul == NULL)
        cout << "Linked List Kosong...";
    else
    {
        cout << endl
             << "Isi Linked List : ";
        while (simpul != NULL)
        {
            cout << simpul->isi << " ";
            simpul = simpul->next;
        }
    }
}