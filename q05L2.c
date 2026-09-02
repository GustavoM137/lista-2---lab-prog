#include <stdio.h>

int main() {
    int maior, menor, n, i = 1;

    while (1) {
        puts("Digite um valor:");
        scanf("%d", &n);

        if (i == 1) {
            maior = menor = n;
            i = 0;
        }

        if (n == 0)
            break;

        if (n > maior)
            maior = n;

        if (n < menor)
            menor = n;
    }

    printf("Maior valor = %d\nMenor valor = %d\n", maior, menor);

    return 0;
}