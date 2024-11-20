#include <stdio.h>

int main() {
    int soNguyen, tong = 0;

    printf("Nhap vao so nguyen (Nhap 0 de ket thuc): ");
    scanf("%d", &soNguyen);

    while (soNguyen != 0) { // Lặp cho đến khi nhập số 0
        if (soNguyen > 0) {
            tong += soNguyen; // Cộng số dương vào tổng
            printf("So ban nhap la so duong. Tong hien tai: %d\n", tong);
        } else {
            printf("So ban nhap la so am. Khong cong vao tong.\n");
        }

        // Nhập số tiếp theo
        printf("Nhap vao so nguyen (Nhap 0 de ket thuc): ");
        scanf("%d", &soNguyen);
    }

    // Khi kết thúc vòng lặp
    printf("Chuong trinh ket thuc.\n");
    printf("Tong cac so duong da nhap: %d\n", tong);

    return 0;
}
