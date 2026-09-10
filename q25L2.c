#include <stdio.h>

int main() {
    float pi = 0;

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 1)
            pi += 4.0 / (2 * (i - 1) + 1);
        else
            pi -= 4.0 / (2 * (i - 1) + 1);

        printf("pi aproximado por %d termos: %f\n", i, pi);
    }

    return 0;
}