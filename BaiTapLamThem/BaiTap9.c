#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int min, max;

    printf("Nhap so nguyen duong min: ");
    scanf("%d", &min);

    printf("Nhap so nguyen duong max: ");
    scanf("%d", &max);

    printf("Cac so nguyen to tu %d den %d la: ", min, max);
    for (int i = min; i <= max; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}