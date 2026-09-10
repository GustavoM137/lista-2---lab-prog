#include <stdio.h>

int main() {
    while (1) {
        int dia;

        puts("Digite um número (1-7) e 0 para encerrar:");
        scanf("%d", &dia);

        if (dia == 0)
            break;

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
            default:
                puts("Número de dia não válido");
        }
    }

    return 0;
}