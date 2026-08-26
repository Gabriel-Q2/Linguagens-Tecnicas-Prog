#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	
	printf("Entre com um valor pra ver se e par ou impar\n");
	scanf("%d", &a);
	
	if (a % 2 == 0) {
		printf("%d eh par.\n", a);
	} else {
		printf("%d eh impar.\n", a);
	}

	return 0;
}
