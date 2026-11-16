#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int vendas[4][3];
    int i, j, c, somaProduto, totalGeral;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 3; j++) {
            do {
                printf("Produto %d - mes %d (0 a 1000): ", i + 1, j + 1);
                if (scanf("%d", &vendas[i][j]) != 1) {
                    printf("Entrada invalida.\n");
                    while ((c = getchar()) != '\n' && c != EOF) {
                    }
                    vendas[i][j] = -1;
                } else if (vendas[i][j] < 0 || vendas[i][j] > 1000) {
                    printf("Quantidade fora do intervalo.\n");
                }
                if (feof(stdin)) {
                    return 0;
                }
            } while (vendas[i][j] < 0 || vendas[i][j] > 1000);
        }
    }

    printf("\nVendas registradas:\n");
    printf("Produto\\Mes\t1\t2\t3\n");
    for (i = 0; i < 4; i++) {
        printf("Produto %d\t", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%d\t", vendas[i][j]);
        }
        printf("\n");
    }

    totalGeral = 0;

    printf("\nTotal vendido por produto:\n");
    for (i = 0; i < 4; i++) {
        somaProduto = 0;
        for (j = 0; j < 3; j++) {
            somaProduto = somaProduto + vendas[i][j];
        }
        printf("Produto %d: %d\n", i + 1, somaProduto);
        totalGeral = totalGeral + somaProduto;
    }

    printf("Total geral de unidades comercializadas: %d\n", totalGeral);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
