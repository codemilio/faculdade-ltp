#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int n, i, soma, c;

    printf("Digite um numero inteiro N (1 a 100): ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida.\n");
        while ((c = getchar()) != '\n' && c != EOF) {
        }
        n = 0;
    }

    while (n < 1 || n > 100) {
        printf("Valor fora do intervalo. Digite N (1 a 100): ");
        if (scanf("%d", &n) != 1) {
            printf("Entrada invalida.\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            n = 0;
        }
    }

    soma = 0;
    i = 1;
    while (i <= n) {
        soma = soma + i;
        i++;
    }

    printf("Valor informado: %d\n", n);
    printf("Soma de 1 ate %d: %d\n", n, soma);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
