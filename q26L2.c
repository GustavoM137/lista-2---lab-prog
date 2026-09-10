#include <stdio.h>

int main() {
    for (int i = 1; i <= 256; i++) {
        printf("Decimal: %d\n", i);

        printf("Binário: ");
        for (unsigned char n = 9; n > 0; n--) {
            unsigned char bin;

            bin = (i >> (n - 1)) & 1;
            printf("%hhu", bin);
        }
        putchar('\n');

        printf("Octal: %o\n", i);

        printf("Hexadecimal: %X\n", i);
        putchar('\n');
    }

    return 0;
}