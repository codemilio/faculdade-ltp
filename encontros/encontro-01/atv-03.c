#include <locale.h>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float compra, desconto, total;

    printf("=== CALCULO DE DESCONTO ===\n\n");

    printf("Valor da compra (R$): ");
    if (scanf("%f", &compra) != 1) {
        printf("Erro: o valor da compra deve ser numerico.\n");
        return 1;
    }

    if (compra <= 0 || compra > 1000000) {
        printf("Erro: o valor deve ser maior que zero e no maximo R$ 1.000.000,00.\n");
        return 1;
    }

    if (compra >= 500) {
        desconto = compra * 0.10;
    } else {
        desconto = 0;
    }

    total = compra - desconto;

    printf("\nValor original: R$ %.2f\n", compra);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Total a pagar: R$ %.2f\n", total);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
