#include <stdio.h>

int main() {
    int num;

    puts("Digite um número inteiro:");
    scanf("%d", &num);

    puts("Tabuada:");
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}