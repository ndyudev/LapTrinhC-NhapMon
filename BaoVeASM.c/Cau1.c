#include <stdio.h>

int main() {
    int min, max;

    printf("Enter a number MIN: ");
    scanf("%d", &min);
    printf("Enter a number MAX: ");
    scanf("%d", &max);

    printf("Cac so le trong khoang tu %d den %d la:\n", min, max);
    for (int i = min; i < max; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
