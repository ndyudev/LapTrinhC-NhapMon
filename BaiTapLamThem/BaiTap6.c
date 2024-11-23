#include <stdio.h>

int main() {
    int n, i, count_even = 0, count_odd = 0;

    // Nhập số lượng phần tử của mảng
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Khai báo mảng
    int arr[n];

    // Nhập các phần tử của mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // In ra các số chia hết cho 7
    printf("Cac so chia het cho 7 trong mang la: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 7 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    // Đếm số chẵn và số lẻ
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count_even++;
        } else {
            count_odd++;
        }
    }

    // In ra kết quả
    printf("So luong so chan: %d\n", count_even);
    printf("So luong so le: %d\n", count_odd);

    return 0;
}