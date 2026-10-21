#include <stdio.h>
#include <stdlib.h>

#define MAX 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numeros[MAX], i, j, aux;
	
	for(i = 0; i < MAX; i++) {
		printf("Digite o %d numero: \n", i+1);
		scanf("%d", &numeros[i]);
	}
	
	printf("Primeiro, os numeros ao contrario: \n");
	for(i = MAX; i > 0; i--) {
		printf("%d, ", numeros[i-1]);
	}
	
	printf("\n Agora, eles ordenados do maior para o menor: \n");
	for(i = 0; i < MAX; i++) {
		for(j = i+1; j < MAX; j++) {
			if(numeros[i] < numeros[j]) {
				aux = numeros[i];
				numeros[i] = numeros[j];
				numeros[j] = aux;
			}
		}
	}
	
	for(i = 0; i < MAX; i++) {
		printf("%d ", numeros[i]);
	}
	
	return 0;
}
