#include <stdio.h>

int main() {
    for (int tc = 10; tc <= 100; tc += 10) {
        printf("%d°C = %d°F\n", tc, tc * 9 / 5 + 32);
    }

    return 0;
}