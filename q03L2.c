#include <stdio.h>

int main() {
    int n, fat = 1, num;

    do {
        puts("Digite um inteiro positivo:");
        scanf("%d", &n);

        if (n < 1)
            puts("Valor inválido.");

    } while (n < 1);

    num = n;

    while (num != 1) {
        fat = fat * num;
        num -= 1;
    }

    printf("%d fatorial = %d\n", n, fat);

    return 0;
}