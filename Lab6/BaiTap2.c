#include <stdio.h>

int main() {
    int n;

    // Nhập số phần tử của mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    // Khởi tạo mảng
    int mang[n];

    // Nhập các phần tử vào mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }

    // Khởi tạo giá trị lớn nhất và nhỏ nhất ban đầu
    int max = mang[0];
    int min = mang[0];

    // Duyệt mảng để tìm max và min
    for (int i = 1; i < n; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
        if (mang[i] < min) {
            min = mang[i];
        }
    }

    // Xuất kết quả
    printf("\nGia tri lon nhat trong mang: %d\n", max);
    printf("Gia tri nho nhat trong mang: %d\n", min);

    return 0;
}
