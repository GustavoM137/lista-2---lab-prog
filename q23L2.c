#include <stdio.h>

int main() {
    int i = 5;
    puts("Pré-decrementando:");
    printf("%d\n", --i);
    printf("%d\n", i);

    puts("Pós-decrementando:");
    i = 5;
    printf("%d\n", i--);
    printf("%d\n", i);

    return 0;
}
