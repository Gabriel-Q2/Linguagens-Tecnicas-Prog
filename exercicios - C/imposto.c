#include <stdio.h>
#include <stdlib.h>
#define deducao1 169.44
#define deducao2 381.44
#define deducao3 662.77
#define deducao4 896.00


float calc_inss(float salario) {
	if (salario <= 1412.00) return salario*0.075;
	else if(salario <= 2666.68) return salario*0.09;
	else if(salario <= 4000.03) return salario*0.12;
	else return salario *0.14;
} 

float calc_irpf(float salario_base) {
	if (salario_base <= 2259.20) return salario_base;
	else if (salario_base <= 2826.65) return (salario_base*0.075) - deducao1;
	else if (salario_base <= 3751.05) return (salario_base*0.15) - deducao2;
	else if (salario_base <= 4664.68) return (salario_base*0.225) - deducao3;
	else return (salario_base*0.275) - deducao4;
}


int main(int argc, char *argv[]) {
	float salario_bruto, desconto_inss, salario_base, imposto_retido;
	scanf("%f", &salario_bruto);
	
	desconto_inss = calc_inss(salario_bruto);
	printf("%f || %f\n", desconto_inss, calc_inss(salario_bruto));
	
	salario_base = salario_bruto - desconto_inss;
	printf("%f\n", salario_base);
	
	imposto_retido = calc_irpf(salario_base);
	printf("Imposto retido eh: %f\n", imposto_retido);
	
	
	return 0;
}
