#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int a, b, c, d, maior, maior_temp1, maior_temp2;
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	//conta
	// compara os 2 primeiros
	maior_temp1 = (a+b+abs(a-b)) / 2;
	//compara os dois ultimos
	maior_temp2 = (c+d+abs(c-d)) / 2;
	
	
	maior = (maior_temp1+maior_temp2+abs(maior_temp1-maior_temp2))/2;
	
	printf("O maior valor entre |%d|%d|%d|%d| = %d\n", a, b, c, d, maior);	

  	return 0;
}
