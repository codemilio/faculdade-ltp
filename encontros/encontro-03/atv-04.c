#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    float notas[5][3];
    int i, j, c, aprovados;
    float somaAluno, mediaAluno, somaGeral, mediaGeral;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 3; j++) {
            do {
                printf("Nota do estudante %d - avaliacao %d (0 a 10): ", i + 1, j + 1);
                if (scanf("%f", &notas[i][j]) != 1) {
                    printf("Entrada invalida.\n");
                    while ((c = getchar()) != '\n' && c != EOF) {
                    }
                    notas[i][j] = -1;
                } else if (notas[i][j] < 0 || notas[i][j] > 10) {
                    printf("Nota fora do intervalo.\n");
                }
                if (feof(stdin)) {
                    return 0;
                }
            } while (notas[i][j] < 0 || notas[i][j] > 10);
        }
    }

    somaGeral = 0;
    aprovados = 0;

    printf("\nNotas por estudante:\n");
    for (i = 0; i < 5; i++) {
        somaAluno = 0;
        printf("Estudante %d: ", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%.2f ", notas[i][j]);
            somaAluno = somaAluno + notas[i][j];
        }
        mediaAluno = somaAluno / 3;
        printf("- Media: %.2f\n", mediaAluno);
        somaGeral = somaGeral + somaAluno;
        if (mediaAluno >= 7) {
            aprovados++;
        }
    }

    mediaGeral = somaGeral / 15;

    printf("Media geral da turma: %.2f\n", mediaGeral);
    printf("Estudantes com media igual ou superior a 7,0: %d\n", aprovados);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
