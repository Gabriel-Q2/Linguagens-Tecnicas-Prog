#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	int a, b, c, maior, maior_temp;
	printf("Informe os valores a serem comparados: ");
	scanf("%d %d %d", &a, &b, &c);
	
	//conta
	maior_temp = (a+b+abs(a-b)) / 2;
	
	maior = (maior_temp+c+abs(maior_temp-c))/2;
	
	printf("O maior valor entre |%d|%d|%d| = %d\n", a, b, c, maior);	

  	return 0;
}	
'
