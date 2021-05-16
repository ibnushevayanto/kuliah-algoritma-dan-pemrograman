#include <iostream>
#include <conio.h>
using namespace std;

char huruf, huruf2;

typedef struct node *simpul;
struct node
{
    char isi;
    simpul Next;
};
void programLat10_1();
void Sisip_Depan_L(simpul &L, char elemen);
void Sisip_Belakang_L(simpul &L, char elemen);
void Sisip_Tengah1_L(simpul &L, char elemen1, char elemen2);
void Sisip_Tengah2_L(simpul &L, char elemen1, char elemen2);
void Hapus_Depan_L(simpul &L);
void Hapus_Belakang_L(simpul &L);
void Hapus_Tengah_L(simpul &L, char elemen);
void Cetak_L(simpul L);

struct Node_D
{
    char isi;
    struct Node_D *kanan;
    struct Node_D *kiri;
};
void programLat10_2();
void Sisip_Depan_D(struct Node_D **DL, char elemen);
void Sisip_Belakang_D(struct Node_D **DL, char elemen);
void Sisip_Tengah1_D(struct Node_D **DL, char elemen1, char elemen2);
void Sisip_Tengah2_D(struct Node_D **DL, char elemen1, char elemen2);
void Hapus_Depan_D(struct Node_D **DL);
void Hapus_Belakang_D(struct Node_D **DL);
void Hapus_Tengah_D(struct Node_D **DL, char elemen);
void Cetak_D(struct Node_D *DL);

main()
{
    int kodeProgram;

    cout << "\nMenu :\n1. Menjalankan Program lat10_1\n2. Menjalankan Program lat10_2" << endl;
    cout << "\nMasukan Kode Program : ";
    cin >> kodeProgram;

    if (kodeProgram == 1)
        programLat10_1();
    else if (kodeProgram == 2)
        programLat10_2();
    else
        cout << "Kode program yang anda masukkan salah !";

    getch();
}

void programLat10_1()
{
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
        Sisip_Depan_L(L, huruf);
    }
    Cetak_L(L);
    cout << endl;
    // Sisip Simpul Belakang
    for (size_t i = 0; i < 4; i++)
    {
        cout << "Penyisipan Simpul Di Belakang " << endl
             << endl;
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Belakang_L(L, huruf);
    }
    Cetak_L(L);

    // Sisip Simpul Setelah Simpul Tertentu
    cout << endl
         << endl
         << "Masukkan Huruf : ";
    cin >> huruf;
    cout << "Disisip Setelah Huruf : ";
    cin >> huruf2;
    Sisip_Tengah1_L(L, huruf, huruf2);
    Cetak_L(L);

    // Sisip Simpul Sebelum Simpul Tertentu
    cout << endl
         << endl
         << "Masukkan Huruf : ";
    cin >> huruf;
    cout << "Disisip Sebelum Huruf : ";
    cin >> huruf2;
    Sisip_Tengah2_L(L, huruf, huruf2);
    Cetak_L(L);

    // Hapus Simpul Depan
    cout << endl
         << endl
         << "Setelah Hapus Simpul Depan\n";
    Hapus_Depan_L(L);
    Cetak_L(L);
    cout << endl;

    // Hapus Simpul Belakang
    cout << endl
         << endl
         << "Setelah Hapus Simpul Belakang\n";
    Hapus_Belakang_L(L);
    Cetak_L(L);
    cout << endl;

    // Hapus Simpul Tengah
    cout << "\n\nMasukkan Huruf Tengah Yang Akan Dihapus : ";
    cin >> huruf;
    Hapus_Tengah_L(L, huruf);
    Cetak_L(L);
}

void programLat10_2()
{
    struct Node_D *DL = NULL;
    int i;

    // Sisip Depan
    cout << "Penyisipan Simpul Depan" << endl
         << endl;

    for (i = 0; i < 4; i++)
    {
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Depan_D(&DL, huruf);
    }
    Cetak_D(DL);

    // Sisip Belakang
    cout << "\nPenyisipan Simpul Belakang" << endl;
    for (i = 0; i < 4; i++)
    {
        cout << "Masukkan Huruf : ";
        cin >> huruf;
        Sisip_Belakang_D(&DL, huruf);
    }
    Cetak_D(DL);

    // Sisip Simpul Setelah Simpul Tertentu
    cout << endl
         << endl
         << "Masukkan Huruf : ";
    cin >> huruf;
    cout << "Disisip Setelah Huruf : ";
    cin >> huruf2;
    Sisip_Tengah1_D(&DL, huruf, huruf2);
    Cetak_D(DL);

    // Sisip Simpul Sebelum Simpul Tertentu
    cout << endl
         << endl
         << "Masukkan Huruf : ";
    cin >> huruf;
    cout << "Disisip Sebelum Huruf : ";
    cin >> huruf2;
    Sisip_Tengah2_D(&DL, huruf, huruf2);
    Cetak_D(DL);

    // Hapus Simpul Depan
    cout << endl
         << endl
         << "\nSetalah Hapus Simpul Depan" << endl;
    Hapus_Depan_D(&DL);
    Cetak_D(DL);

    // Hapus Simpul Belakang
    cout << endl
         << endl
         << "\nSetalah Hapus Simpul Belakang" << endl;
    Hapus_Belakang_D(&DL);
    Cetak_D(DL);

    // Hapus SImpul Tengah
    cout << "\n\nMasukan huruf tengah yang akan dihapus : ";
    cin >> huruf;
    Hapus_Tengah_D(&DL, huruf);
    Cetak_D(DL);
}

void Sisip_Depan_L(simpul &L, char elemen)
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

void Sisip_Belakang_L(simpul &L, char elemen)
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

void Sisip_Tengah1_L(simpul &L, char elemen1, char elemen2)
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

void Sisip_Tengah2_L(simpul &L, char elemen1, char elemen2)
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

void Cetak_L(simpul L)
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

void Hapus_Depan_L(simpul &L)
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

void Hapus_Belakang_L(simpul &L)
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

void Hapus_Tengah_L(simpul &L, char elemen)
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

void Cetak_D(struct Node_D *DL)
{
    if (DL == NULL)
        cout << "Linked List Kosong...";
    else
    {
        struct Node_D *last;

        while (DL != NULL)
        {
            cout << DL->isi << "<==>";
            last = DL;
            DL = DL->kanan;
        }
    }
}

void Sisip_Depan_D(struct Node_D **DL, char elemen)
{
    struct Node_D *baru = new Node_D;

    baru->isi = elemen;

    baru->kanan = (*DL);
    baru->kiri = NULL;

    if ((*DL) != NULL)
        (*DL)->kiri = baru;

    (*DL) = baru;
}

void Sisip_Belakang_D(struct Node_D **DL, char elemen)
{
    struct Node_D *baru = new Node_D; //allocate memory for node
    struct Node_D *last = *DL;      //set last node value to head

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

void Sisip_Tengah1_D(struct Node_D **DL, char elemen1, char elemen2)
{
    struct Node_D *last = *DL;
    struct Node_D *baru = new Node_D;

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

void Sisip_Tengah2_D(struct Node_D **DL, char elemen1, char elemmen2)
{
    struct Node_D *last = *DL;
    struct Node_D *baru = new Node_D;

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

void Hapus_Depan_D(struct Node_D **DL)
{
    if (*DL == NULL)
        cout << "Linked List Kosong...";
    else
    {
        struct Node_D *nodeHapus = *DL;
        (*DL) = (*DL)->kanan;
        (*DL)->kiri = NULL;
        nodeHapus->kanan = NULL;
    }
}

void Hapus_Belakang_D(struct Node_D **DL)
{
    struct Node_D *node = *DL;
    struct Node_D *nodeHapus = new Node_D;

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

void Hapus_Tengah_D(struct Node_D **DL, char elemen)
{
    struct Node_D *simpul = *DL;
    struct Node_D *simpulHapus = new Node_D;

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