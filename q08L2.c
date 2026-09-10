#include <stdio.h>

int main() {
    float entrada, preco;
    int prestacoes;

    do {
        puts("Digite o valor da mercadoria (positivo):");
        scanf("%f", &preco);

        if (preco <= 0)
            puts("Valor inválido");
    } while (preco <= 0);

    prestacoes = preco / 3;
    entrada = preco - 2 * prestacoes;

    printf("Valor da entrada: R$ %.2f \nValor das prestações: R$ %d.00\n", entrada, prestacoes);

    return 0;
}