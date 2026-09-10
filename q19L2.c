#include <stdio.h>

int main() {
    int a, b, sum = 0;

    puts("Digite dois inteiros:");
    scanf("%d %d", &a, &b);

    if (b < a) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    for (int i = a; i <= b; i++)
        sum += i;

    printf("Média aritmética dos inteiros no intervalo [%d, %d] = %.2f", a, b, (float)sum / (b - a + 1));

    return 0;
}