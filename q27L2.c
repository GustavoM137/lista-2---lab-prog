#include <stdio.h>

int main() {
    int maior = 0, menor = 0, i = 1, num;
    while (1) {
        puts("Digite um inteiro:");
        scanf("%d", &num);

        if (num < 0 && num % 2 == 0)
            break;

        if (i == 1) {
            maior = menor = num;
            i = 0;
        }

        if (num > maior)
            maior = num;

        if (num < menor)
            menor = num;
    }

    printf("Maior: %d \nMenor: %d\n", maior, menor);

    return 0;
}