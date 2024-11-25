#include <stdio.h>

int main() {
    int n;

    // Nhập vào số phần tử của mảng
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    // Khai báo mảng
    int mang[n];
    int i;
    float tong = 0;
    int count = 0;
    float tb;

    // Nhập dữ liệu cho mảng
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &mang[i]);
    }

    // Duyệt mảng để tìm tổng và đếm các số chia hết cho 3
    for (i = 0; i < n; i++) {
        if (mang[i] % 3 == 0) {
            tong += mang[i]; // Cộng vào tổng
            count++;         // Tăng biến đếm
        }
    }

    // Kiểm tra và tính trung bình
    if (count > 0) {
        tb = tong / count;
        printf("Trung binh cac so chia het cho 3: %.2f\n", tb);
    } else {
        printf("Khong co so nao trong mang chia het cho 3.\n");
    }

    return 0;
}
