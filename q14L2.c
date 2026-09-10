#include <stdio.h>

int main() {
    int a, b, q = 0;

    puts("Digite dois números inteiros:");
    scanf("%d %d", &a, &b);

    if (b < a) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    for (int i = a; i <= b; i++) {
        if (i % 3 == 0)
            q += 1;
    }

    printf("Quantidade de múltiplos de 3 no intervalo [%d, %d]: %d\n", a, b, q);

    return 0;
}