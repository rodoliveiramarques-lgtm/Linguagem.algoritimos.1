#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void exibirMenu() {
    printf("\n CALCULADORA AVANCADA \n");
    printf("1. Soma (+)                       2. Subtracao (-)\n");
    printf("3. Multiplicacao (*)              4. Divisao (/)\n");
    printf("5. Potenciacao (x^y)              6. Raiz Quadrada (v^2)\n");
    printf("7. Raiz Cubica (v^3)              8. Seno (rad)\n");
    printf("9. Cosseno (rad)                 10. Tangente (rad)\n");
    printf("11. Logaritmo Natural (ln)       12. Logaritmo Base 10 (log10)\n");
    printf("13. Valor Absoluto (|x|)         14. Calculo de Porcentagem (%%)\n");
    printf("15. Media Aritmetica             16. Graus para Radianos\n");
    printf("17. Radianos para Graus          18. Area do Circulo\n");
    printf("19. Area do Retangulo            20. Calculo de Hipotenusa\n");
    printf("0. Sair\n");
    printf("\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int opcao;
    double n1, n2, resultado;

    do {
        exibirMenu();
      
        if (scanf("%d", &opcao) != 1) {
            printf("\nErro: Entrada invalida! Digite um numero.\n");
            while (getchar() != '\n'); 
            continue;
        }

        if (opcao == 0) {
            printf("\nSaindo da calculadora... Ate logo!\n");
            break;
        }

        switch (opcao) {
            case 1:
                printf("Digite o primeiro numero: "); scanf("%lf", &n1);
                printf("Digite o segundo numero: "); scanf("%lf", &n2);
                printf("\nResultado da Soma: %.4f\n", n1 + n2);
                break;
            case 2:
                printf("Digite o primeiro numero: "); scanf("%lf", &n1);
                printf("Digite o segundo numero: "); scanf("%lf", &n2);
                printf("\nResultado da Subtracao: %.4f\n", n1 - n2);
                break;
            case 3:
                printf("Digite o primeiro numero: "); scanf("%lf", &n1);
                printf("Digite o segundo numero: "); scanf("%lf", &n2);
                printf("\nResultado da Multiplicacao: %.4f\n", n1 * n2);
                break;
            case 4:
                printf("Digite o dividendo: "); scanf("%lf", &n1);
                printf("Digite o divisor: "); scanf("%lf", &n2);
                if (n2 != 0)
                    printf("\nResultado da Divisao: %.4f\n", n1 / n2);
                else
                    printf("\nErro: Divisao por zero nao permitida!\n");
                break;
            case 5:
                printf("Digite a base (x): "); scanf("%lf", &n1);
                printf("Digite o expoente (y): "); scanf("%lf", &n2);
                printf("\nResultado de %.2f^%.2f: %.4f\n", n1, n2, pow(n1, n2));
                break;
            case 6:
                printf("Digite o numero: "); scanf("%lf", &n1);
                if (n1 >= 0)
                    printf("\nRaiz Quadrada de %.2f: %.4f\n", n1, sqrt(n1));
                else
                    printf("\nErro: Nao existe raiz quadrada de numero negativo nos reais!\n");
                break;
            case 7:
                printf("Digite o numero: "); scanf("%lf", &n1);
                printf("\nRaiz Cubica de %.2f: %.4f\n", n1, cbrt(n1));
                break;
            case 8:
                printf("Digite o angulo em radianos: "); scanf("%lf", &n1);
                printf("\nSeno: %.4f\n", sin(n1));
                break;
            case 9:
                printf("Digite o angulo em radianos: "); scanf("%lf", &n1);
                printf("\nCosseno: %.4f\n", cos(n1));
                break;
            case 10:
                printf("Digite o angulo em radianos: "); scanf("%lf", &n1);
                if (cos(n1) != 0)
                    printf("\nTangente: %.4f\n", tan(n1));
                else
                    printf("\nErro: Tangente indefinida para este angulo!\n");
                break;
            case 11:
                printf("Digite o numero (maior que 0): "); scanf("%lf", &n1);
                if (n1 > 0)
                    printf("\nLogaritmo Natural (ln): %.4f\n", log(n1));
                else
                    printf("\nErro: O argumento deve ser maior que zero!\n");
                break;
            case 12:
                printf("Digite o numero (maior que 0): "); scanf("%lf", &n1);
                if (n1 > 0)
                    printf("\nLogaritmo Base 10: %.4f\n", log10(n1));
                else
                    printf("\nErro: O argumento deve ser maior que zero!\n");
                break;
            case 13:
                printf("Digite o numero: "); scanf("%lf", &n1);
                printf("\nValor Absoluto: %.4f\n", fabs(n1));
                break;
            case 14:
                printf("Digite o valor total: "); scanf("%lf", &n1);
                printf("Digite a porcentagem desejada (Ex: 15 para 15%%): "); scanf("%lf", &n2);
                printf("\n%.2f%% de %.2f eh: %.4f\n", n2, n1, (n1 * n2) / 100.0);
                break;
            case 15: {
                int qtd;
                double soma_media = 0, valor;
                printf("Quantos numeros deseja inserir para a media? ");
                scanf("%d", &qtd);
                if (qtd > 0) {
                    for (int i = 1; i <= qtd; i++) {
                        printf("Digite o numero %d: ", i);
                        scanf("%lf", &valor);
                        soma_media += valor;
                    }
                    printf("\nMedia Aritmetica: %.4f\n", soma_media / qtd);
                } else {
                    printf("\nErro: Quantidade invalida!\n");
                }
                break;
            }
            case 16:
                printf("Digite o valor em graus: "); scanf("%lf", &n1);
                printf("\n%.2f graus = %.4f radianos\n", n1, n1 * (M_PI / 180.0));
                break;
            case 17:
                printf("Digite o valor em radianos: "); scanf("%lf", &n1);
                printf("\n%.4f radianos = %.2f graus\n", n1, n1 * (180.0 / M_PI));
                break;
            case 18:
                printf("Digite o raio do círculo: "); scanf("%lf", &n1);
                if (n1 >= 0)
                    printf("\nArea do Circulo: %.4f\n", M_PI * pow(n1, 2));
                else
                    printf("\nErro: O raio nao pode ser negativo!\\n");
                break;
            case 19:
                printf("Digite a base do retangulo: "); scanf("%lf", &n1);
                printf("Digite a altura do retangulo: "); scanf("%lf", &n2);
                if (n1 >= 0 && n2 >= 0)
                    printf("\nArea do Retangulo: %.4f\n", n1 * n2);
                else
                    printf("\nErro: As dimensoes nao podem ser negativas!\\n");
                break;
            case 20:
                printf("Digite o primeiro cateto: "); scanf("%lf", &n1);
                printf("Digite o segundo cateto: "); scanf("%lf", &n2);
                printf("\nHipotenusa: %.4f\n", hypot(n1, n2));
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
