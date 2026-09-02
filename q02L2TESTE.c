#include <stdio.h>

int main() {
    int dia;
    do {
        puts("Digite um número (1-7) e 0 para encerrar:");
        scanf("%d", &dia);

        switch (dia) {
        case 1:
            puts("Domingo");
            break;
        case 2:
            puts("Segunda");
            break;
        case 3:
            puts("Terça");
            break;
        case 4:
            puts("Quarta");
            break;
        case 5:
            puts("Quinta");
            break;
        case 6:
            puts("Sexta");
            break;
        case 7:
            puts("Sábado");
            break;
        case 0:
            break;
        default:
            puts("Número de dia não válido");
        }
    } while (dia != 0);

    return 0;
}