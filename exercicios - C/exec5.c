#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int num1, num2, num3, num4, soma, media, prod;
	
	printf("Digite quatro numeros (com espacamento): \n");
	scanf("%d %d %d %d", &num1, &num2, &num3, num4);

	soma = num1 + num2 + num3 + num4;
	media = (num1 + num2 + num3 + num4) / 4;
	prod = num1 * num2 * num3 * num4;
	
	printf("A soma entre os numeros e: %d \n", soma);
	printf("A media entre os numeros e: %d \n", media);
	printf("O produtorio entre os numeros e: %d \n", prod);
	
	return 0;
}
