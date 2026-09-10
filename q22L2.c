#include <stdio.h>

int main() {
    int num, q = 0;

    puts("Digite um número inteiro:");
    scanf("%d", &num);

    while (num != 0) {
        if (num % 10 == 7 || num % 10 == -7)
            q += 1;
        num /= 10;
    }

    printf("%d dígitos do inteiro são 7.", q);

    return 0;
}