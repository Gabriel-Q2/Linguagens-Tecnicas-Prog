#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
 int dias, meses, anos; 
    
    printf("Quantos dias voce viveu? ");
    scanf("%d", &dias);
	
	anos = dias / 365;
	meses = dias / 30;
	
	printf("\nVoce viveu %.1d dias.", dias);
	printf("\nVoce viveu %.1d meses.", meses);
	printf("\nVoce viveu %.1d anos.", anos);

  return 0;
}
