#include <stdio.h>

int main() {
    int n;

    // Nhập số n và kiểm tra số lẻ
    do {
        printf("Nhap vao mot so le duong: ");
        scanf("%d", &n);
    } while (n <= 0 || n % 2 == 0);

    // Tìm và in ra các số chia hết cho 5
    printf("Cac so tu 1 den %d chia het cho 5 la: ", n);
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}