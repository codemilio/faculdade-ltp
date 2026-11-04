#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  char nome[50];
  float media;

  printf("=== CLASSIFICACAO DO DESEMPENHO ===\n\n");

  printf("Nome do estudante: ");
  scanf(" %49s", nome);

  printf("Media final (0 a 10): ");
  if (scanf("%f", &media) != 1) {
    printf("Erro: a media deve ser um numero.\n");
    return 1;
  }
  if (media < 0 || media > 10) {
    printf("Erro: a media deve estar entre 0 e 10.\n");
    return 1;
  }

  printf("\nEstudante: %s\n", nome);
  printf("Media final: %.2f\n", media);

  if (media < 5) {
    printf("Classificacao: INSUFICIENTE\n");
  } else if (media < 7) {
    printf("Classificacao: EM RECUPERACAO\n");
  } else if (media < 9) {
    printf("Classificacao: BOM DESEMPENHO\n");
  } else {
    printf("Classificacao: EXCELENTE DESEMPENHO\n");
  }

  printf("\nPressione ENTER para sair...");
  getchar();
  getchar();

  return 0;
}
