#include <stdio.h>

int main() {
    int soNguyen, tong = 0;

    printf("Nhap vao so nguyen (Nhap 0 de ket thuc): ");
    scanf("%d", &soNguyen);

    while (soNguyen != 0) {
        tong += soNguyen; 
        printf("Nhap vao so nguyen (Nhap 0 de ket thuc): ");
        scanf("%d", &soNguyen);
    }

    printf("Tong cac so nguyen da nhap: %d\n", tong); 
    return 0;
}
