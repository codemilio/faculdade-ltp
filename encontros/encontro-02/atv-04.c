#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int n, i, c;

    printf("Digite um numero inteiro (1 a 100): ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida.\n");
        while ((c = getchar()) != '\n' && c != EOF) {
        }
        n = 0;
    }

    while (n < 1 || n > 100) {
        printf("Valor fora do intervalo. Digite um numero (1 a 100): ");
        if (scanf("%d", &n) != 1) {
            printf("Entrada invalida.\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            n = 0;
        }
    }

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
