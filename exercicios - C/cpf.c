#include <stdio.h>
#include <stdlib.h>


int validaPrimeiro(num1, num2, num3, num4, num5, num6, num7, num8, num9) {
	int valid1, valid2, valid3, valid4, valid5, valid6, valid7, valid8, valid9, soma, resto, valid;
	
	valid1 = num1*10;
	valid2 = num2*9;
	valid3 = num3*8;
	valid4 = num4*7;
	valid5 = num5*6;
	valid6 = num6*5;
	valid7 = num7*4;
	valid8 = num8*3;
	valid9 = num9*2;
	
	soma = valid1 + valid2 + valid3 + valid4 + valid5 + valid6 + valid7 + valid8 + valid9;
	resto = (soma * 10)%11;
	if (resto == 10) resto = 0;
	
	if (resto < 2) {
		valid = 0;
	} else {
		valid = 11 - resto;
	}
	
	return valid;
}

int validaSegundo(num1, num2, num3, num4, num5, num6, num7, num8, num9, num10) {
	int valid1, valid2, valid3, valid4, valid5, valid6, valid7, valid8, valid9, valid10, soma, resto, valid;
	
	valid1 = num1*11;
	valid2 = num2*10;
	valid3 = num3*9;
	valid4 = num4*8;
	valid5 = num5*7;
	valid6 = num6*6;
	valid7 = num7*5;
	valid8 = num8*4;
	valid9 = num9*3;
	valid10 = num10*2;
	
	soma = valid1 + valid2 + valid3 + valid4 + valid5 + valid6 + valid7 + valid8 + valid9 + valid10;
	resto = (soma * 10)%11;
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
	

	printf("Digite um cpf: ");
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
