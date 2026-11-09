#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    float valor, total, media, maior;
    int quantidade, c;

    quantidade = 0;
    total = 0;
    maior = 0;

    printf("Digite o valor de cada venda (-1 para encerrar): ");
    if (scanf("%f", &valor) != 1) {
        printf("Entrada invalida.\n");
        while ((c = getchar()) != '\n' && c != EOF) {
        }
        valor = -2;
    }

    while (valor != -1) {
        if (valor > 0) {
            total = total + valor;
            quantidade++;
            if (quantidade == 1 || valor > maior) {
                maior = valor;
            }
        } else {
            printf("Valor invalido. Digite um valor maior que zero ou -1 para encerrar.\n");
        }

        printf("Digite o valor de cada venda (-1 para encerrar): ");
        if (scanf("%f", &valor) != 1) {
            printf("Entrada invalida.\n");
            while ((c = getchar()) != '\n' && c != EOF) {
            }
            valor = -2;
        }
    }

    if (quantidade == 0) {
        printf("Nenhuma venda registrada.\n");
    } else {
        media = total / quantidade;
        printf("Quantidade de vendas: %d\n", quantidade);
        printf("Valor total vendido: %.2f\n", total);
        printf("Media das vendas: %.2f\n", media);
        printf("Maior valor registrado: %.2f\n", maior);
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
