#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(int argc, char *argv[]) {
	
	int num1, num2, num3, num4, soma, media, prod;
	
	printf("Digite o primeiro numero: \n");
	scanf("%d", &num1);
	
	printf("Digite o segundo numero: \n");
	scanf("%d", &num2);
	
	printf("Digite o terceiro numero: \n");
	scanf("%d", &num3);
	
	printf("Digite o quarto numero: \n");
	scanf("%d", &num4);	
	
	soma = num1 + num2 + num3 + num4;
	media = (num1 + num2 + num3 + num4) / 4;
	prod = num1 * num2 * num3 * num4;
	
	printf("A soma entre os numeros e: %d \n", soma);
	printf("A media entre os numeros e: %d \n", media);
	printf("O produtorio entre os numeros e: %d \n", prod);
	
	return 0;
}
