#include<stdio.h>
#include<ctype.h>

main()
{	
	int maximumNumber, index;
	char questionStartApplication;
 
    do {
    	printf("Input Maximum Number : ");
    	scanf("%d", &maximumNumber);
    	
    	printf("\n");
    	
 		printf("Genap : ");
        for(index = 1; index <= maximumNumber; index++){
        	if(index % 2 == 0) printf("%d ", index);
		}
		
		printf("\n");
		
		printf("Ganjil : ");
        for(index = 1; index <= maximumNumber; index++){
        	if(index % 2 != 0) printf("%d ", index);
		}
		
		printf("\n");
        printf("\nApakah Anda Ingin Keluar [y/n] ? ");
        scanf(" %c", &questionStartApplication);
		printf("\n\n");

    }while(tolower(questionStartApplication) == 'y');
}
