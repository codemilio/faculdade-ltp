#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int inicial, final, n, i, c;

    do {
        printf("Digite o valor inicial: ");
        if (scanf("%d", &inicial) != 1) {
            printf("Entrada invalida.\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            inicial = 1;
            final = 0;
            continue;
        }

        printf("Digite o valor final: ");
        if (scanf("%d", &final) != 1) {
            printf("Entrada invalida.\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            inicial = 1;
            final = 0;
            continue;
        }

        if (inicial > final) {
            printf("O valor inicial deve ser menor ou igual ao final.\n");
        }
    } while (inicial > final);

    for (n = inicial; n <= final; n++) {
        printf("\nTabuada do %d:\n", n);
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
