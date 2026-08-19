#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float raio, volume;
	float pi = 3.14159;
	
	printf("Digite o valor do raio de uma esfera, para calcularmos o volume: \n");
	scanf("%f", &raio);
	
	volume = (4/3.0) * pi * pow(raio, 3);
	
	printf("O volume da esfera de raio %.2f e igual a %.2f \n", raio, volume);
	
	return 0;
}
