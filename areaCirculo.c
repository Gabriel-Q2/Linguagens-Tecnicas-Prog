#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159265359
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float raio, area;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	
	area = pi * (raio * 2);
	
	printf("A area do circulo e: %f" , area);
	return 0;
}
