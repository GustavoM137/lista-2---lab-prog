#include <stdio.h>

int main() {
    int termo, a = 1, b = 0;

    do {
        puts("Digite até qual termo gerar:");
        scanf("%d", &termo);

        if (termo < 0)
            puts("Termo inválido.");

    } while (termo < 0);

    puts("Sequência de Fibonacci:");
    for (termo; termo >= 0; termo--) {
        printf("%d ", b);
        a += b;
        b = a - b;
    }

    return 0;
}