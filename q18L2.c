#include <stdio.h>

int main() {
    unsigned long long sum_graos = 0, graos_trigo = 1;

    for (int i = 1; i <= 64; i++) {
        sum_graos += graos_trigo;
        graos_trigo = 2 * graos_trigo;
    }

    printf("Somatório de grãos: %llu\n", sum_graos);

    return 0;
}