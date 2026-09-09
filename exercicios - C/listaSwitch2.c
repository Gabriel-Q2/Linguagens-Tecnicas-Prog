#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

    int opcao;


    printf("Escolha um exercicio (De 1 a 10): ");
    scanf("%d", &opcao);

    switch (opcao) {

        // EXERCICIO 1
        case 1: {
            int a, b, c, d;
            int maior_temp1, maior_temp2, maior;

            printf("\n--- EXERCICIO 1 ---\n");

            printf("Informe os valores a serem comparados: ");
            scanf("%d %d %d %d", &a, &b, &c, &d);

            // Compara os 2 primeiros
            maior_temp1 = (a + b + abs(a - b)) / 2;

            // Compara os 2 ultimos
            maior_temp2 = (c + d + abs(c - d)) / 2;

            // Compara os dois maiores
            maior = (maior_temp1 + maior_temp2 +
                     abs(maior_temp1 - maior_temp2)) / 2;

            printf("O maior valor entre |%d| |%d| |%d| |%d| = %d\n",
                   a, b, c, d, maior);

            break;
        }

        // EXERCICIO 2
        case 2: {
            int ano_nascimento, ano_atual, idade;

            printf("\n--- EXERCICIO 2 ---\n");

            printf("Digite a idade que completa esse ano: ");
            scanf("%d", &idade);

            printf("Digite o ano atual: ");
            scanf("%d", &ano_atual);

            ano_nascimento = ano_atual - idade;

            printf("O ano do seu nascimento e: %d\n", ano_nascimento);

            break;
        }

        // EXERCICIO 3
        case 3: {
            float kilometros_hora, metros_segundo;

            printf("\n--- EXERCICIO 3 ---\n");

            printf("Digite a quantos km/h esta: ");
            scanf("%f", &kilometros_hora);

            metros_segundo = kilometros_hora / 3.6;

            printf("Voce esta a %.1f km/h e a %.1f m/s\n",
                   kilometros_hora, metros_segundo);

            break;
        }

        // EXERCICIO 4
        case 4: {
            float real, dolar;

            printf("\n--- EXERCICIO 4 ---\n");

            printf("Digite seu valor em reais: ");
            scanf("%f", &real);

            dolar = real / 5.19;

            printf("Seu valor em reais e %.2f, e em dolar e %.2f!\n",
                   real, dolar);

            break;
        }

        // EXERCICIO 5
        case 5: {
            float celsius, fahrenheit;

            printf("\n--- EXERCICIO 5 ---\n");

            printf("Digite a temperatura em Celsius: ");
            scanf("%f", &celsius);

            fahrenheit = celsius * 9.0 / 5.0 + 32;

            printf("A temperatura em Fahrenheit e: %.1f F\n",
                   fahrenheit);

            break;
        }

        // EXERCICIO 6
        case 6: {
            float graus, radianos;
            float pi = 3.141592;

            printf("\n--- EXERCICIO 6 ---\n");

            printf("Digite os graus: ");
            scanf("%f", &graus);

            radianos = graus * pi / 180;

            printf("Os radianos sao: %.2f\n", radianos);

            break;
        }

        // EXERCICIO 7
        case 7: {
            int numero, antecessor, sucessor;

            printf("\n--- EXERCICIO 7 ---\n");

            printf("Digite um numero: ");
            scanf("%d", &numero);

            antecessor = numero - 1;
            sucessor = numero + 1;

            printf("O numero e %d, o antecessor e %d, "
                   "e o sucessor e %d!\n",
                   numero, antecessor, sucessor);

            break;
        }

        // EXERCICIO 8
        case 8: {
            float premio, primeiro, segundo, terceiro;

            printf("\n--- EXERCICIO 8 ---\n");

            premio = 780000;

            primeiro = premio * 0.46;
            segundo = premio * 0.32;
            terceiro = premio * 0.22;

            printf("O premio total = %.2f\n", premio);
            printf("O primeiro ganhou %.2f\n", primeiro);
            printf("O segundo ganhou %.2f\n", segundo);
            printf("O terceiro ganhou %.2f\n", terceiro);

            break;
        }

        // EXERCICIO 9
        case 9: {
            int tempo, horas, minutos, segundos;

            printf("\n--- EXERCICIO 9 ---\n");

            printf("Digite o tempo de duracao do evento em segundos: ");
            scanf("%d", &tempo);

            horas = tempo / 3600;
            minutos = (tempo % 3600) / 60;
            segundos = tempo % 60;

            printf("%02d:%02d:%02d\n", horas, minutos, segundos);

            break;
        }

        // EXERCICIO 10
        case 10: {
            int tempo, velocidade;
            double distancia, litros;

            printf("\n--- EXERCICIO 10 ---\n");

            printf("Digite o tempo gasto: ");
            scanf("%d", &tempo);

            printf("Agora digite a velocidade: ");
            scanf("%d", &velocidade);

            distancia = tempo * velocidade;
            litros = distancia / 12.0;

            printf("Litros gastos: %.3lf\n", litros);

            break;
        }

        // SAIR
        case 0:
            printf("\nPrograma encerrado!\n");
            break;

        // OPCAO INVALIDA
        default:
            printf("\nOpcao invalida!\n");
            break;
    }

    return 0;
}
