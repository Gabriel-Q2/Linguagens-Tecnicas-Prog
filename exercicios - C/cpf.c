#include <stdio.h>
#include <stdlib.h>

int validaPrimeiro(int num1, int num2, int num3, int num4, int num5,
                   int num6, int num7, int num8, int num9) {
    int soma, resto, valid;

    soma = num1 * 10 +
           num2 * 9 +
           num3 * 8 +
           num4 * 7 +
           num5 * 6 +
           num6 * 5 +
           num7 * 4 +
           num8 * 3 +
           num9 * 2;

    resto = soma % 11;
	
	if (resto == 10) resto = 0;
    if (resto < 2) {
        valid = 0;
    } else {
        valid = 11 - resto;
    }

    return valid;
}

int validaSegundo(int num1, int num2, int num3, int num4, int num5,
                  int num6, int num7, int num8, int num9, int num10) {
    int soma, resto, valid;

    soma = num1 * 11 +
           num2 * 10 +
           num3 * 9 +
           num4 * 8 +
           num5 * 7 +
           num6 * 6 +
           num7 * 5 +
           num8 * 4 +
           num9 * 3 +
           num10 * 2;

    resto = soma % 11;
	
	if (resto == 10) resto = 0;
    if (resto < 2) {
        valid = 0;
    } else {
        valid = 11 - resto;
    }

    return valid;
}


int main(int argc, char *argv[]) {
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, validar1, validar2;
	

	printf("Digite um CPF: ");
	scanf("%d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11);
	
	printf("O cpf eh: %d%d%d.%d%d%d.%d%d%d-%d%d\n", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11);
	

	validar1 = validaPrimeiro(num1, num2, num3, num4, num5, num6, num7, num8, num9);
	printf("O numero valid1 eh: %d\n", validar1);
	
	validar2 = validaSegundo(num1, num2, num3, num4, num5, num6, num7, num8, num9, validar1);
	printf("O numero valid2 eh: %d\n", validar2);
	
	if (validar1 == num10 && validar2 == num11) {
		printf("CPF valido");
	} else {
		printf("CPF INvalido");
	}
	
	return 0;
}
