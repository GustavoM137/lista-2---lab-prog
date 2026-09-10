#include <stdio.h>

int main() {
    int abcde, a, b, c, d, e, edcba;

    do {
        puts("Digite um número de cinco dígitos:");
        scanf("%d", &abcde);

        if (abcde < 10000 || abcde > 99999)
            puts("Número inválido.");

    } while (abcde < 10000 || abcde > 99999);

    a = abcde / 10000;
    b = (abcde / 1000) % 10;
    c = (abcde / 100) % 10;
    d = (abcde / 10) % 10;
    e = abcde % 10;

    edcba = e * 10000 + d * 1000 + c * 100 + b * 10 + a;

    if (abcde == edcba)
        printf("%d é um palíndromo. (%d = %05d)\n", abcde, abcde, edcba);

    else
        printf("%d não é um palíndromo. (%d != %05d)\n", abcde, abcde, edcba);

    return 0;
}