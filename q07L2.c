#include <stdio.h>

int main() {
    float a, b;

    puts("Digite dois números:");
    scanf("%f %f", &a, &b);

    while (b == 0) {
        puts("O segundo não pode ser 0, digite outro número:");
        scanf("%f", &b);
    }

    printf("%.2f / %.2f = %.2f", a, b, a / b);

    return 0;
}