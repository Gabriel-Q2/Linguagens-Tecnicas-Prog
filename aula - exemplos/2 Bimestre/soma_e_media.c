#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor, soma, i;
	i = 0;
	soma = 0;
	
	while(i < 10) {
		printf("Insira o valor numero %d: \n", i+1);
		scanf("%d", &valor);
		if (valor < 0) {
			printf("Valor negativo, numero ignorado\n");
		} else {
			printf("Valor aceito\n");
			soma = soma + valor;
			i++;	
		}	
	}
	
	printf("A soma dos valores eh: %d\n", soma);
	printf("A media dos valores eh: %d", soma/10);
	
	return 0;
}
