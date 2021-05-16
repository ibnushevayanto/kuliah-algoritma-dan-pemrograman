#include <iostream>
#include <conio.h>
#define true 1;
#define false 0;
using namespace std;

struct Node
{
    char isi;
    struct Node *kanan;
    struct Node *kiri;
};

void Sisip_Depan(struct Node **DL, char elemen);
void Sisip_Belakang(struct Node **DL, char elemen);
void Sisip_Tengah1(struct Node **DL, char elemen1, char elemen2);
void Sisip_Tengah2(struct Node **DL, char elemen1, char elemen2);
void Hapus_Depan(struct Node **DL);
void Hapus_Belakang(struct Node **DL);
void Hapus_Tengah(struct Node **DL, char elemen);
void Cetak(struct Node *DL);

main()
{
    char huruf, huruf2;
    struct Node *DL = NULL;
    int i;

    // Sisip Depan
    cout << "Penyisipan Simpul Depan" << endl
         << endl;

    for (i = 0; i < 4; i++)
    {
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Depan(&DL, huruf);
    }
    Cetak(DL);

    // Sisip Belakang
    cout << "\nPenyisipan Simpul Belakang" << endl;
    for (i = 0; i < 4; i++)
    {
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Belakang(&DL, huruf);
    }
    Cetak(DL);

    // Sisip Simpul Setelah Simpul Tertentu
    cout << endl
         << endl
         << "Masukkan Huruf : ";
    cin >> huruf;
    cout << "Disisip Setelah Huruf : ";
    cin >> huruf2;
    Sisip_Tengah1(&DL, huruf, huruf2);
    Cetak(DL);

    // Sisip Simpul Sebelum Simpul Tertentu
    cout << endl
         << endl
         << "Masukkan Huruf : ";
    cin >> huruf;
    cout << "Disisip Sebelum Huruf : ";
    cin >> huruf2;
    Sisip_Tengah2(&DL, huruf, huruf2);
    Cetak(DL);

    // Hapus Simpul Depan
    cout << endl
         << endl
         << "\nSetalah Hapus Simpul Depan" << endl;
    Hapus_Depan(&DL);
    Cetak(DL);

    // Hapus Simpul Belakang
    cout << endl
         << endl
         << "\nSetalah Hapus Simpul Belakang" << endl;
    Hapus_Belakang(&DL);
    Cetak(DL);

    // Hapus SImpul Tengah
    cout << "\n\nMasukan huruf tengah yang akan dihapus : ";
    cin >> huruf;
    Hapus_Tengah(&DL, huruf);
    Cetak(DL);

    getch();
}

void Cetak(struct Node *DL)
{
    if (DL == NULL)
        cout << "Linked List Kosong...";
    else
    {
        struct Node *last;

        while (DL != NULL)
        {
            cout << DL->isi << "<==>";
            last = DL;
            DL = DL->kanan;
        }
    }
}

void Sisip_Depan(struct Node **DL, char elemen)
{
    struct Node *baru = new Node;

    baru->isi = elemen;

    baru->kanan = (*DL);
    baru->kiri = NULL;

    if ((*DL) != NULL)
        (*DL)->kiri = baru;

    (*DL) = baru;
}

void Sisip_Belakang(struct Node **DL, char elemen)
{
    struct Node *baru = new Node; //allocate memory for node
    struct Node *last = *DL;      //set last node value to head

    baru->isi = elemen; //set data for new node
    baru->kanan = NULL; //new node is the last node , so set next of new node to null

    //check if list is empty, if yes make new node the head of list
    if (*DL == NULL)
    {
        baru->kiri = NULL;
        *DL = baru;
    }
    else
    {
        while (last->kanan != NULL)
            last = last->kanan;

        last->kanan = baru; //set next of last to new node
        baru->kiri = last;  //set last to prev of new node
    }
}

void Sisip_Tengah1(struct Node **DL, char elemen1, char elemen2)
{
    struct Node *last = *DL;
    struct Node *baru = new Node;

    baru->isi = elemen1;
    baru->kanan = NULL;

    if (*DL == NULL)
        cout << "Linked List Kosong...";
    else
    {
        while (last->isi != elemen2)
            last = last->kanan;

        baru->kanan = last->kanan;
        baru->kiri = last;
        last->kanan->kiri = baru;
        last->kanan = baru;
    }
}

void Sisip_Tengah2(struct Node **DL, char elemen1, char elemmen2)
{
    struct Node *last = *DL;
    struct Node *baru = new Node;

    baru->isi = elemen1;
    baru->kanan = NULL;

    if (*DL == NULL)
        cout << "List Kosong...";
    else
    {
        while (last->kanan->isi != elemmen2)
            last = last->kanan;

        baru->kanan = last->kanan;
        baru->kiri = last;
        last->kanan->kiri = baru;
        last->kanan = baru;
    }
}

void Hapus_Depan(struct Node **DL)
{
    if (*DL == NULL)
        cout << "Linked List Kosong...";
    else
    {
        struct Node *nodeHapus = *DL;
        (*DL) = (*DL)->kanan;
        (*DL)->kiri = NULL;
        nodeHapus->kanan = NULL;
    }
}

void Hapus_Belakang(struct Node **DL)
{
    struct Node *node = *DL;
    struct Node *nodeHapus = new Node;

    if (*DL == NULL)
        cout << "Linked List Kosong...";
    else
    {
        while (node->kanan->kanan != NULL)
            node = node->kanan;

        nodeHapus = node->kanan;
        node->kanan = NULL;
        nodeHapus->kiri = NULL;
    }
}

void Hapus_Tengah(struct Node **DL, char elemen)
{
    struct Node *simpul = *DL;
    struct Node *simpulHapus = new Node;

    if (DL == NULL)
        cout << "Linked List Kosong...";
    else
    {
        while (simpul->kanan->isi != elemen)
            simpul = simpul->kanan;

        simpulHapus = simpul->kanan;
        simpul->kanan->kanan->kiri = simpul;
        simpul->kanan = simpul->kanan->kanan;
        simpulHapus->kanan = NULL;
        simpulHapus->kiri = NULL;
    }
}