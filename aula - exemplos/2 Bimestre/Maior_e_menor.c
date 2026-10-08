#include <stdio.h>
#include <stdlib.h>

int compara_maior (int a, int b) {
	if(a < b) return b;
	else return a;
}

int compara_menor (int a, int b) {
	if(a > b) return b;
	else return a;
}


int main(int argc, char *argv[]) {
	int valores[5];
	int maior, menor, i;
	
	printf("Vamos ler os valores: \n");
	for(i=0; i<5; i++) {
		scanf("%d", &valores[i]);
	}
	
	for(i=1, maior = valores[0]; i<5; i+=2) {
		int temp = compara_maior(valores[i], valores[i+1]);
		maior = compara_maior(maior, temp);
	}
	
	for(i=1, menor = valores[0]; i<5; i+=2) {
		int temp = compara_menor(valores[i], valores[i+1]);
		menor = compara_menor(menor, temp);
	}
	
	printf("\n O maior valor eh:  %d", maior);
	printf("\n O menor valor eh: %d", menor);
	
	return 0;
}
