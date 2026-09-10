#include <stdio.h>

int main() {
    int sum_mod3 = 0, sum_mod5 = 0;

    for (int i = 0; i <= 200; i++) {
        if (i <= 100 && i % 3 == 0)
            sum_mod3 += i;

        if (i > 100 && i % 5 == 0)
            sum_mod5 += i;
    }

    printf("Somatório dos múltiplos de 3: %d\n", sum_mod3);
    printf("Somatório dos múltiplos de 5: %d\n", sum_mod5);

    return 0;
}