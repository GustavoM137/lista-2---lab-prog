#include <stdio.h>

int main() {
    puts("(Cateto 1, Cateto 2, Hipotenusa)");

    for (int cat1 = 1; cat1 <= 500; cat1++) {
        for (int cat2 = 1; cat2 <= 500; cat2++) {
            for (int hip = 1; hip <= 500; hip++) {
                if (cat1 * cat1 + cat2 * cat2 == hip * hip)
                    printf("(%d, %d, %d)\n", cat1, cat2, hip);
            }
        }
    }

    return 0;
}