#include <stdio.h>
main()
{
 int panjang, lebar, tinggi, luas, volume;
 
 printf ("Masukkan Panjang : "); 
 scanf ("%d",&panjang);
 
 printf ("Masukkan Lebar : "); 
 scanf ("%d",&lebar);
 
 printf ("Masukkan Tinggi : "); 
 scanf ("%d",&tinggi);
 
 luas= (2 * panjang * lebar) + (2 * panjang * tinggi) + (2 * tinggi * lebar);
 
 volume = panjang * lebar * tinggi;
 
 printf ("Jadi Luasnya Adalah %d\n",luas);
 printf ("Jadi Volumenya Adalah %d\n",volume);
}

