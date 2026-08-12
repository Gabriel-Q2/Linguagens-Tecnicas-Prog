#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159265359
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float raio, area, b1, b2, h;
	
	printf("Digite o raio do circulo: ");
	scanf("%f", &raio);
	
	area = pi * (raio * 2);
	
	printf("A area do circulo e: %f\n" , area);
	
	
	printf("Agora a area do trapezio \n");
	printf("fale a altura: ");
	scanf("%f", &h);
	printf("fale a base maior: ");
	scanf("%f", &b1);
	printf("fale a base menor: ");
	scanf("%f", &b2);
	
	area = ((b1+b2)*h)/2;
	
	printf("A area do trapezio e de: %f", area);
	
	return 0;
}
