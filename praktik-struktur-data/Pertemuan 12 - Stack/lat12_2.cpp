#include <iostream>
#include <conio.h>
using namespace std;
const int MaxS = 100;

struct node
{
    char isi;
    struct node *next;
};

struct Stack
{
    char Isi[MaxS];
    int nilai[MaxS];
    unsigned int Top;
};

void programMenu1(Stack &S);
void programMenu2(Stack &S);
void programMenu3(Stack &S);
void programMenu4();

void INITS(Stack &S);
void PUSH(Stack &S, char elemen);
void PUSH(Stack &S, char character, int index);
void CETAK(Stack &S);
void POP(Stack &S, char &Hsl);
void PUSH(Stack &S, int nilai);
void CETAK_BINARY(Stack &S);
void Sisip_Belakang(struct node **simpul, char elemen);
void Hapus_Belakang(struct node **simpul);
void Cetak(struct node *simpul);

main()
{
    int pilihanMenu;
    Stack S;
    INITS(S);

    cout << "Menu : " << endl;
    cout << "1. Program Stack dengan menggunakan Array" << endl;
    cout << "2. Program membalik karakter dalam suatu kalimat" << endl;
    cout << "3. Program mengkonversi bilangan desimal menjadi bilangan biner" << endl;
    cout << "4. Program stack dengan menggunakan singly linked list" << endl;

    cout << "\nMohon input menu yang dipilih : ";
    cin >> pilihanMenu;

    if (pilihanMenu == 1)
        programMenu1(S);
    else if (pilihanMenu == 2)
        programMenu2(S);
    else if (pilihanMenu == 3)
        programMenu3(S);
    else if (pilihanMenu == 4)
        programMenu4();
    else
        cout << "Menu yang anda masukan tidak valid.";

    getch();
}

void programMenu1(Stack &S)
{
    char huruf;

    for (size_t i = 0; i < 3; i++)
    {
        cout << "Masukkan Karakter : ";
        cin >> huruf;
        PUSH(S, huruf);
    }
    CETAK(S);

    POP(S, huruf);
    cout << endl
         << "Yang Dihapus... " << huruf;
    CETAK(S);

    for (size_t i = 0; i < 3; i++)
    {
        cout << "Masukkan Karakter : ";
        cin >> huruf;
        PUSH(S, huruf);
    }
    CETAK(S);
}

void programMenu2(Stack &S)
{
    char huruf, huruf2;
    int N;

    cout << "Berapa character yang akan anda masukkan ? ";
    cin >> N;
    if (N > MaxS)
        N = MaxS;

    for (size_t i = 0; i < N; i++)
    {
        cout << "Masukkan character ke-" << i + 1 << " : ";
        cin >> huruf;
        PUSH(S, huruf);
    }

    cout << "\nCharacter sebelum dibalik : ";
    CETAK(S);
    cout << endl;

    int nilaiSetengahnya = N / 2;
    for (size_t i = 0; i < nilaiSetengahnya; i++)
    {
        huruf = S.Isi[i];
        huruf2 = S.Isi[(N - 1) - i];

        PUSH(S, huruf, (N - 1) - i);
        PUSH(S, huruf2, i);
    }

    cout << "\nCharacter setelah dibalik : ";
    CETAK(S);
}

void programMenu3(Stack &S)
{
    int bilanganDecimal;

    cout << "Masukkan bilangan decimal yang ingin dikonversikan : ";
    cin >> bilanganDecimal;

    while (bilanganDecimal >= 1)
    {
        PUSH(S, (int)bilanganDecimal % 2);
        bilanganDecimal /= 2;
    }

    CETAK_BINARY(S);
}

void programMenu4()
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
}

void INITS(Stack &S)
{
    S.Top = 0;
}

void PUSH(Stack &S, char elemen)
{
    if (S.Top < MaxS)
    {
        S.Isi[S.Top] = elemen;
        S.Top++;
    }
    else
        cout << "Stack Penuh...";
}

void CETAK(Stack &S)
{
    if (S.Top > 0)
    {
        cout << endl
             << "Isi Stack : ";
        for (size_t i = 0; i < S.Top; i++)
            cout << S.Isi[i] << " ";
    }
    else
        cout << "Stack Kosong...";
}

void POP(Stack &S, char &Hsl)
{
    if (S.Top > 0)
    {
        Hsl = S.Isi[S.Top];
        S.Top--;
    }
    else
        cout << "Stack Kosong...";
}

void PUSH(Stack &S, char character, int index)
{
    S.Isi[index] = character;
}

void PUSH(Stack &S, int nilai)
{
    if (S.Top < MaxS)
    {
        S.nilai[S.Top] = nilai;
        S.Top++;
    }
    else
        cout << "\nStack Penuh...";
}

void CETAK_BINARY(Stack &S)
{
    if (S.Top == 0)
        cout << "\nStack Kosong...";
    else
    {
        cout << "Bilangan Binary : ";
        for (int i = S.Top - 1; i >= 0; i--)
        {
            cout << S.nilai[i];
        }
    }
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