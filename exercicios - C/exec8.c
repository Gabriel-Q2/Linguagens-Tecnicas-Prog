#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//exercicio 8
	double coordX1, coordX2, coordY1, coordY2, expo1, expo2, dist;
	
	printf("Digite a primeira coordenada x: ");
	scanf("%lf", &coordX1);
	
	printf("Digite a primeira coordenada y: ");
	scanf("%lf", &coordY1);

  	printf("Digite a segunda coordenada x: ");
	scanf("%lf", &coordX2);
	
	printf("Digite a segunda coordenada y: ");
	scanf("%lf", &coordY2);
	
	dist = sqrt((pow(coordX1-coordX2, 2)) + (pow((coordY1-coordY2), 2)));
	
	printf("A distancia entre os pontos e de: %.2f", dist);
	
	return 0;
}
