#include <stdio.h>

int main() {
    int n;

    // Nhập số nguyên dương n
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    // In ra các số chia hết cho 2 hoặc 5
    printf("Cac so tu 1 den %d chia het cho 2 hoac 5 la:\n", n-1);
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0 || i % 5 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}