#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int opcao;

  printf("=== MENU DE SERVICOS ACADEMICOS ===\n");
  printf("1 - Matricula\n");
  printf("2 - Horarios\n");
  printf("3 - Avaliacoes\n");
  printf("4 - Atendimento academico\n");
  printf("5 - Encerrar\n");
  printf("-----------------------------------\n");

  printf("Escolha uma opcao (1 a 5): ");
  if (scanf("%d", &opcao) != 1) {
    printf("Erro: digite um numero inteiro.\n");
    return 1;
  }

  if (opcao < 1 || opcao > 5) {
    printf("Erro: a opcao deve estar entre 1 e 5.\n");
    return 1;
  }

  switch (opcao) {
  case 1:
    printf("Voce escolheu Matricula.\n");
    break;
  case 2:
    printf("Voce escolheu Horarios.\n");
    break;
  case 3:
    printf("Voce escolheu Avaliacoes.\n");
    break;
  case 4:
    printf("Voce escolheu Atendimento academico.\n");
    break;
  case 5:
    printf("Encerrando o atendimento.\n");
    return 0;
    break;
  }

  printf("\nPressione ENTER para sair...");
  getchar();
  getchar();

  return 0;
}
