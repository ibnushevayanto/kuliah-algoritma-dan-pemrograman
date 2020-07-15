#include<stdio.h>
#include<ctype.h>

main()
{
    int n=1, maximumNumber;
    bool start = true;
    char questionStartApplication;
 
    do {
 	
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
		
		printf("\n");
        printf("\nApakah Anda Ingin Keluar [y/n] ? ");
        scanf(" %c", &questionStartApplication);
		printf("\n\n");

    }while(tolower(questionStartApplication) == 'y');
}
