#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int estoque[8];
    int i, c, total, maior;

    for (i = 0; i < 8; i++) {
        do {
            printf("Quantidade do produto %d (0 a 500): ", i + 1);
            if (scanf("%d", &estoque[i]) != 1) {
                printf("Entrada invalida.\n");
                while ((c = getchar()) != '\n' && c != EOF) {
                }
                estoque[i] = -1;
            } else if (estoque[i] < 0 || estoque[i] > 500) {
                printf("Quantidade fora do intervalo.\n");
            }
            if (feof(stdin)) {
                return 0;
            }
        } while (estoque[i] < 0 || estoque[i] > 500);
    }

    total = 0;
    maior = estoque[0];

    printf("\nQuantidades cadastradas:\n");
    for (i = 0; i < 8; i++) {
        printf("Produto %d: %d\n", i + 1, estoque[i]);
        total = total + estoque[i];
        if (estoque[i] > maior) {
            maior = estoque[i];
        }
    }

    printf("Total de unidades em estoque: %d\n", total);
    printf("Maior quantidade registrada: %d\n", maior);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
