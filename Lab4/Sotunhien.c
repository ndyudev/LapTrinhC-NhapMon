#include <stdio.h>

int main() {
    int min, max;
    float tong = 0, bienDem = 0, trungBinh = 0;

    // Nhập min và max từ bàn phím
    printf("Nhap gia tri min: ");
    scanf("%d", &min);
    printf("Nhap gia tri max: ");
    scanf("%d", &max);

    // Kiểm tra và tính tổng các số chia hết cho 2
    int i = min;
    while(i <= max) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
        i++;
    }

    // Kiểm tra bienDem để tránh chia cho 0
    if (bienDem > 0) {
        trungBinh = tong / bienDem;
        printf("Trung binh tong cua cac so tu nhien chia het cho 2 tu %d toi %d la: %.2f\n", min, max, trungBinh);
    } else {
        printf("Khong co so nao chia het cho 2 trong khoang tu %d toi %d\n", min, max);
    }

    return 0;
}
