#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
double nota;
		
	printf("Digited um valor do tipo DOUBLE: ");
		scanf("%lf", &nota);
	printf("A notacao cientifica e: %.2e\n", nota);

  return 0;
}
