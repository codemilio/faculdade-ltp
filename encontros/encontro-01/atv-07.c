#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int opcao, cupom;
  float preco = 0, desconto, total;

  printf("=== SERVICOS TECNICOS ===\n");
  printf("1 - Instalacao de software - R$ 120,00\n");
  printf("2 - Configuracao de computador - R$ 180,00\n");
  printf("3 - Manutencao preventiva - R$ 250,00\n");
  printf("4 - Diagnostico tecnico - R$ 80,00\n");
  printf("----------------------------------------\n");

  printf("Escolha o servico (1 a 4): ");
  if (scanf("%d", &opcao) != 1) {
    printf("Erro: a opcao deve ser um numero inteiro.\n");
    return 1;
  }
  if (opcao < 1 || opcao > 4) {
    printf("Erro: a opcao deve estar entre 1 e 4.\n");
    return 1;
  }

  printf("Possui cupom de desconto? (1 - Sim / 0 - Nao): ");
  if (scanf("%d", &cupom) != 1) {
    printf("Erro: o cupom deve ser 1 ou 0.\n");
    return 1;
  }
  if (cupom != 0 && cupom != 1) {
    printf("Erro: o cupom deve ser 1 (sim) ou 0 (nao).\n");
    return 1;
  }

  switch (opcao) {
  case 1:
    preco = 120.00;
    break;
  case 2:
    preco = 180.00;
    break;
  case 3:
    preco = 250.00;
    break;
  case 4:
    preco = 80.00;
    break;
  }

  if (cupom == 1) {
    desconto = preco * 0.10;
  } else {
    desconto = 0;
  }

  total = preco - desconto;

  printf("\nPreco original: R$ %.2f\n", preco);
  printf("Desconto: R$ %.2f\n", desconto);
  printf("Valor final: R$ %.2f\n", total);

  printf("\nPressione ENTER para sair...");
  getchar();
  getchar();

  return 0;
}
