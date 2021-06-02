#include <iostream>
#include <conio.h>
using namespace std;

struct node
{
    char isi;
    struct node *next;
};

void Sisip_Belakang(struct node **simpul, char elemen);
void Hapus_Depan(struct node **simpul);
void Cetak(struct node *simpul);

main()
{
    char huruf;
    struct node *L = NULL;
    int i;

    cout << "==Operasi Pada Single Linked List==" << endl
         << endl;

    // ! Sisip Belakang

    cout << "\nPenyisipan Simpul\n\n";
    for (i = 0; i <= 3; i++)
    {
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Belakang(&L, huruf);
    }
    Cetak(L);

    // ! Hapus Simpul Depan

    for (i = 0; i < 3; i++)
    {
        cout << "\nSetelah Hapus Simpul" << endl;
        Hapus_Depan(&L);
        Cetak(L);
    }

    cout << "\nPenyisipan Simpul\n\n";
    for (i = 0; i <= 3; i++)
    {
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Belakang(&L, huruf);
    }
    Cetak(L);

    for (i = 0; i < 2; i++)
    {
        cout << "\nSetelah Hapus Simpul" << endl;
        Hapus_Depan(&L);
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

void Hapus_Depan(struct node **simpul)
{

    if (*simpul == NULL)
        cout << "Linked List Kosong...";
    else
    {
        struct node *hapus = *simpul;
        (*simpul) = (*simpul)->next;
        hapus->next = NULL;
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