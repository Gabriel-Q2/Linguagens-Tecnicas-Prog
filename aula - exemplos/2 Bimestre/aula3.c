#include <stdio.h>
#include <stdlib.h>

/*Lista de exercicios*/

int main(int argc, char *argv[]) {
	// exercicio 1

	int inicio, final, passo;
	
	
	printf("Insira os valores de inicio, final e passo= ");
	scanf("%d %d %d", &inicio, &final, &passo);
	
	while(inicio <= final) {
		printf(" %d |", inicio);
		inicio = inicio + passo;
	}
	
	// exercicio 2
	float numero, denominador, clock, soma;
	
	printf("Insira o numero: ");
	scanf("%f", &numero);
	
	printf("S = ");
	denominador = 2.0;
	soma = 0.0;
	while(clock < numero) {
		printf("1/%.0f; ", denominador);
		soma = soma + 1.0/denominador;
		denominador = denominador * 2.0;
		clock++;
	}
	printf("\nResultado da Soma= %.2f", soma);
	
	
	// exercicio 3
	int n, linhas, i, casas;
	
	printf("Digite o numero de linhas= ");
	scanf("%d", &linhas);
	
	i = 0;
	casas = 1;
	n = 1;
	while(i <= linhas) {
		while(casas < i) {
			printf("%d ", n);
			casas++;
		}
		printf("\n");
		i++;
	}
	
	return 0;
}
