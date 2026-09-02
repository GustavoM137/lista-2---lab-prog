#include <stdio.h>

int main() {
    float jose_altura = 150, pedro_altura = 110, jose_crescimento = 2, pedro_crescimento = 3;
    int anos;

    while (jose_altura != pedro_altura) {
        jose_altura += jose_crescimento;
        pedro_altura += pedro_crescimento;

        anos += 1;
    }

    printf("Pedro será maior que josé em %d anos.\n", anos + 1);

    return 0;
}