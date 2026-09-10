#include <stdio.h>

int main() {
    int a, b;

    puts("Digite dois números:");
    scanf("%d %d", &a, &b);

    if (b < a) {
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    for (a; a <= b; a++) {
        if (a % 4 == 0)
            printf("%d^2 = %d\n", a, a * a);
    }

    return 0;
}