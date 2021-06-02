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
    int i, N, menu;

    cout << "Menu : " << endl;
    cout << "1. Sisip Item Dari Belakang" << endl;
    cout << "2. Hapus Item Dari Depan" << endl;
    cout << "3. Cetak Item" << endl;

    do
    {
        cout << "\n\nMasukkan Perintah : ";
        cin >> menu;

        if (menu == 1)
        {
            cout << "\nMasukkan Jumlah Elemen Yang Ingin Anda Masukkan : ";
            cin >> N;
            cout << "\nPenyisipan Simpul\n\n";
            for (i = 0; i < N; i++)
            {
                cout << "Masukkan Huruf : ";
                cin >> huruf;
                Sisip_Belakang(&L, huruf);
            }

            cout << "\nBerhasil Menyisipkan Simpul";
        }
        else if (menu == 3)
        {
            Cetak(L);
        }
        else if (menu == 2)
        {

            cout << "\nMasukkan Jumlah Elemen Yang Ingin Anda Hapus : ";
            cin >> N;

            cout << "\nPenghapusan Simpul\n\n";
            for (i = 0; i < N; i++)
            {
                Hapus_Depan(&L);
            }
        }

    } while (menu == 1 || menu == 2 || menu == 3);

    cout << "\n\nExit...\n\n";

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