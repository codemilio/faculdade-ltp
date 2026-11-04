#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  char nome[50];
  float media;

  printf("=== VERIFICACAO DE APROVACAO ===\n\n");

  printf("Primeiro Nome do estudante: ");
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

  if (media >= 7) {
    printf("Situacao: APROVADO\n");
  } else {
    printf("Situacao: NAO APROVADO\n");
  }

  printf("\nPressione ENTER para sair...");
  getchar();
  getchar();

  return 0;
}
