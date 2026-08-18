#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, valor, resto;
    int b64, b32, b16, b8, b4, b2, b1;

    printf("Digite um numero positivo (n <= 64): ");
    scanf("%d", &n);

    if (n > 64) {
        printf("Numero invalido!\n");
        return 1;
    } else if (n < 0) {
        printf("Numero invalido!\n");
        return 1;
    }

    valor = n;

    b64 = valor / 64;
    resto = valor % 64;
    valor = resto;

    b32 = valor / 32;
    resto = valor % 32;
    valor = resto;

    b16 = valor / 16;
    resto = valor % 16;
    valor = resto;

    b8 = valor / 8;
    resto = valor % 8;
    valor = resto;

    b4 = valor / 4;
    resto = valor % 4;
    valor = resto;

    b2 = valor / 2;
    resto = valor % 2;
    valor = resto;

    b1 = valor / 1;

    printf("Valor em binario: ");

    if (b64 == 1) { printf("%d", b64); } else {printf("%d", b64);}
    if (b32 == 1) { printf("%d", b32); } else {printf("%d", b32);}
    if (b16 == 1) { printf("%d", b16); } else {printf("%d", b16);}
    if (b8  == 1) { printf("%d", b8);  } else {printf("%d", b8);}
    if (b4  == 1) { printf("%d", b4);  } else {printf("%d", b4);}
    if (b2  == 1) { printf("%d", b2);  } else {printf("%d", b2);}
    if (b1  == 1) { printf("%d", b1);  } else {printf("%d", b1);}

    printf("\n");

    return 0;
}
