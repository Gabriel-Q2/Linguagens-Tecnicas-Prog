#include <stdio.h>

int multDigito(int digito, int valor) {
    return digito * valor;
}

int main() {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, soma1, soma2, v10, v11;

    printf("Digite o seu CPF (Sem pontuacao): ");

    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11);
    printf("O cpf eh: %d%d%d.%d%d%d.%d%d%d-%d%d\n", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11);

    soma1 = multDigito(num1, 10)
          + multDigito(num2, 9)
          + multDigito(num3, 8)
          + multDigito(num4, 7)
          + multDigito(num5, 6)
          + multDigito(num6, 5)
          + multDigito(num7, 4)
          + multDigito(num8, 3)
          + multDigito(num9, 2);

    v10 = (soma1 * 10) % 11;

    soma2 = multDigito(num1, 11)
          + multDigito(num2, 10)
          + multDigito(num3, 9)
          + multDigito(num4, 8)
          + multDigito(num5, 7)
          + multDigito(num6, 6)
          + multDigito(num7, 5)
          + multDigito(num8, 4)
          + multDigito(num9, 3)
          + multDigito(num10, 2);

    v11 = (soma2 * 10) % 11;

    if (v10 == num10 && v11 == num11) {
        printf("CPF valido!\n");
    } else {
        printf("CPF INvalido!\n");
    }

    return 0;
}
