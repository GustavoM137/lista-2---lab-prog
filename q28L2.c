#include <stdio.h>

int main() {
    unsigned char x, y, arm[8];

    puts("Digite dois inteiros, com o segundo sendo maior que 4 e menor que 252:");
    scanf("%hhu %hhu", &x, &y);

    while (y < 5 || y > 251) {
        puts("Valor inválido, digite um inteiro maior que 4 e menor que 252:");
        scanf("%hhu", &y);
    }

    for (int i = 0; i < 4; i++) {
        arm[i] = y - 4 + i;     // arm[0..3] = y-4, y-3, y-2 e y-1
        arm[7 - i] = y + 4 - i; // arm[4..7] = y+1, y+2, y+3 e y+4
    }

    for (int i = 0; i < 8; i++) {
        arm[i] = (arm[i] & 254) | ((x >> i) & 1); // primeiro zera o LSB e depois coloca o bit de x

        printf("Y%+d (bit %d): ", i < 4 ? i - 4 : i - 3, i + 1);

        for (unsigned char n = 8; n > 0; n--) {
            unsigned char bin;

            bin = (arm[i] >> (n - 1)) & 1;
            printf("%hhu", bin);
        }
        putchar('\n');
    }

    printf("X (%hhu): ", x);

    for (unsigned char n = 8; n > 0; n--) {
        unsigned char bin;

        bin = (x >> (n - 1)) & 1;
        printf("%hhu", bin);
    }
    putchar('\n');

    return 0;
}
