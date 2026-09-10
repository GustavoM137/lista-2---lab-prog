#include <stdio.h>

int main() {
    int a, b, somatorio = 0;

    puts("Digite dois números inteiros:");
    scanf("%d %d", &a, &b);

    if (b < a) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0)
            somatorio += i;
    }

    printf("Somatórios dos pares no intervalo [%d, %d]: %d\n", a, b, somatorio);

    return 0;
}