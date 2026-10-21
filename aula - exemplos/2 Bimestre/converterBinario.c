#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, aux, mult = 1;
	
	printf("Digite um numero e converter para binario: \n");
	scanf("%d", &n);
	
	aux = 0;
	
	while(n > 0) {
		aux = aux + (n % 2) * mult;
		n = n / 2;
		mult = mult * 10;
	}
	
	printf("O numero em binario eh: \n");
	printf("%d", aux);
	
	return 0;
}
