#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, r, aux;
	
	printf("Entre com os valores para A, B e C (Diferentes entre si)\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a > b) {
		aux = a;
	} else {
		aux = b;
	}
	
	if (aux > c) {
		r = aux;
	} else {
		r = c;
	}
	
	printf("%d eh o maior\n", r);
	return 0;
}
