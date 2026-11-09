#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int opcao, c;
    float a, b;

    do {
        printf("\n1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("0 - Encerrar\n");
        printf("Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida.\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            opcao = -1;
            continue;
        }

        if (opcao < 0 || opcao > 4) {
            printf("Opcao invalida.\n");
            continue;
        }

        if (opcao == 0) {
            printf("Encerrando...\n");
            continue;
        }

        printf("Digite dois numeros: ");
        if (scanf("%f %f", &a, &b) != 2) {
            printf("Entrada invalida.\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            continue;
        }

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f\n", a + b);
                break;
            case 2:
                printf("Resultado: %.2f\n", a - b);
                break;
            case 3:
                printf("Resultado: %.2f\n", a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("Nao e possivel dividir por zero.\n");
                } else {
                    printf("Resultado: %.2f\n", a / b);
                }
                break;
        }
    } while (opcao != 0);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
