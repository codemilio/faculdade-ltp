#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  float media, renda;

  printf("=== ELEGIBILIDADE PARA BOLSA DE ESTUDOS ===\n\n");

  printf("Media academica (0 a 10): ");
  if (scanf("%f", &media) != 1) {
    printf("Erro: a media deve ser um numero.\n");
    return 1;
  }

  printf("Renda familiar mensal (R$): ");
  if (scanf("%f", &renda) != 1) {
    printf("Erro: a renda deve ser um numero.\n");
    return 1;
  }

  if (media >= 0 && media <= 10) {
    if (renda >= 0 && renda <= 1000000) {
      printf("\nMedia: %.2f\n", media);
      printf("Renda familiar: R$ %.2f\n", renda);

      if (media >= 8 && renda <= 2500) {
        printf("Resultado: ATENDE aos criterios da bolsa.\n");
      } else {
        printf("Resultado: NAO ATENDE aos criterios da bolsa.\n");
      }
    } else {
      printf("Erro: a renda deve estar entre 0 e R$ 1.000.000,00.\n");
      return 1;
    }
  } else {
    printf("Erro: a media deve estar entre 0 e 10.\n");
    return 1;
  }

  printf("\nPressione ENTER para sair...");
  getchar();
  getchar();

  return 0;
}
