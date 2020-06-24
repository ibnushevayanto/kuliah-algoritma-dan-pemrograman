#include<stdio.h>
main()
{
 int n=1, maximumNumber;
 
 printf("Masukkan Maximum Angka : ");
 scanf("%d", &maximumNumber);
 
 printf("\n========== Hasil ==========\n\n");
 
 printf("Genap : ");
 
 do{
 	if(n % 2 == 0 ) printf("%d ", n);
 }while(n++ < maximumNumber);
 
 n = 1;
 
 printf("\n");
 printf("Ganjil : ");
 
 do{
 	if(n % 2 != 0 ) printf("%d ", n);
 }while(n++ < maximumNumber);
}
