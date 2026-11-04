#include <locale.h>
#include <stdio.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  char nome[50];
  int idade, faltas;
  float nota1, nota2, media;

  printf("=== CADASTRO E DESEMPENHO ACADEMICO ===\n\n");

  printf("Primeiro Nome do estudante: ");
  scanf(" %49s", nome);

  printf("Idade (1 a 120): ");
  if (scanf("%d", &idade) != 1) {
    printf("Erro: a idade deve ser um numero inteiro.\n");
    return 1;
  }
  if (idade < 1 || idade > 120) {
    printf("Erro: a idade deve estar entre 1 e 120.\n");
    return 1;
  }

  printf("Primeira nota (0 a 10): ");
  if (scanf("%f", &nota1) != 1) {
    printf("Erro: a nota deve ser um numero.\n");
    return 1;
  }
  if (nota1 < 0 || nota1 > 10) {
    printf("Erro: a primeira nota deve estar entre 0 e 10.\n");
    return 1;
  }

  printf("Segunda nota (0 a 10): ");
  if (scanf("%f", &nota2) != 1) {
    printf("Erro: a nota deve ser um numero.\n");
    return 1;
  }
  if (nota2 < 0 || nota2 > 10) {
    printf("Erro: a segunda nota deve estar entre 0 e 10.\n");
    return 1;
  }

  printf("Quantidade de faltas: ");
  if (scanf("%d", &faltas) != 1) {
    printf("Erro: as faltas devem ser um numero inteiro.\n");
    return 1;
  }
  if (faltas < 0) {
    printf("Erro: as faltas nao podem ser negativas.\n");
    return 1;
  }

  media = (nota1 + nota2) / 2;

  printf("\n--- RELATORIO DO ESTUDANTE ---\n");
  printf("Nome: %s\n", nome);
  printf("Idade: %d anos\n", idade);
  printf("Primeira nota: %.2f\n", nota1);
  printf("Segunda nota: %.2f\n", nota2);
  printf("Faltas: %d\n", faltas);
  printf("Media final: %.2f\n", media);

  printf("\nPressione ENTER para sair...");
  getchar();
  getchar();

  return 0;
}
