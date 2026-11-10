#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    int qtd, i, c;
    float nota, soma, media;

    printf("Quantidade de estudantes (1 a 50): ");
    if (scanf("%d", &qtd) != 1) {
        printf("Entrada invalida.\n");
        while ((c = getchar()) != '\n' && c != EOF) {
        }
        qtd = 0;
    }

    while (qtd < 1 || qtd > 50) {
        printf("Valor fora do intervalo. Digite a quantidade (1 a 50): ");
        if (scanf("%d", &qtd) != 1) {
            printf("Entrada invalida.\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            qtd = 0;
        }
    }

    soma = 0;

    for (i = 1; i <= qtd; i++) {
        do {
            printf("Nota do estudante %d: ", i);
            if (scanf("%f", &nota) != 1) {
                printf("Entrada invalida.\n");
                while ((c = getchar()) != '\n' && c != EOF) {
                }
                nota = -1;
            } else if (nota < 0 || nota > 10) {
                printf("Nota fora do intervalo.\n");
            }
        } while (nota < 0 || nota > 10);

        soma = soma + nota;
    }

    media = soma / qtd;

    printf("Soma das notas: %.2f\n", soma);
    printf("Media da turma: %.2f\n", media);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
