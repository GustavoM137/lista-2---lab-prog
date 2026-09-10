#include <stdio.h>

int main() {
    int num, i = 10, q = 0;

    puts("Digite um número inteiro:");
    scanf("%d", &num);

    while (num / i != 0) {
        i *= 10;
    }

    for (i; i != 0; i /= 10) {
        if ((num / i) % 10 == 7 || (num / i) % 10 == -7)
            q += 1;
    }

    printf("%d dígitos do inteiro são 7.", q);

    return 0;
}