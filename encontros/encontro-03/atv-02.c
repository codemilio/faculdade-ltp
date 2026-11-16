#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    float notas[10];
    int i, c, aprovados;
    float soma, media, maior, menor;

    for (i = 0; i < 10; i++) {
        do {
            printf("Nota do estudante %d (0 a 10): ", i + 1);
            if (scanf("%f", &notas[i]) != 1) {
                printf("Entrada invalida.\n");
                while ((c = getchar()) != '\n' && c != EOF) {
                }
                notas[i] = -1;
            } else if (notas[i] < 0 || notas[i] > 10) {
                printf("Nota fora do intervalo.\n");
            }
            if (feof(stdin)) {
                return 0;
            }
        } while (notas[i] < 0 || notas[i] > 10);
    }

    soma = 0;
    aprovados = 0;
    maior = notas[0];
    menor = notas[0];

    printf("\nNotas cadastradas:\n");
    for (i = 0; i < 10; i++) {
        printf("Estudante %d: %.2f\n", i + 1, notas[i]);
        soma = soma + notas[i];
        if (notas[i] >= 6) {
            aprovados++;
        }
        if (notas[i] > maior) {
            maior = notas[i];
        }
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }

    media = soma / 10;

    printf("Media da turma: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);
    printf("Notas maiores ou iguais a 6,0: %d\n", aprovados);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
