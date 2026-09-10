#include <stdio.h>

int main() {
    for (int i = 0; i <= 7; i++) {
        int pot = 1;

        for (int j = i; j > 0; j--)
            pot *= 3;

        printf("3^%d = %d\n", i, pot);
    }

    return 0;
}