#include <stdio.h>

main()
{
	int panjang, lebar, luas, keliling;
	
	printf("Masukkan Panjang Persegi Panjang : ");
	scanf ("%d", &panjang);
	
	printf("Masukkan Lebar Persegi Panjang : ");
	scanf("%d", &lebar);
	
	luas = panjang * lebar;
	keliling = 2 * (panjang + lebar);
	
	printf("Jadi Luas Persegi Panjangnya Adalah : %d\n", luas);
	printf("Jadi Keliling Persegi Panjangnya Adalah : %d\n", keliling);
}
