#include <stdio.h>

int main() {
    int n;

    // Nhập số nguyên dương n
    do {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
    } while (n <= 0);

    // Tìm và in ra các ước số của n
    printf("Cac uoc so cua %d la: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}