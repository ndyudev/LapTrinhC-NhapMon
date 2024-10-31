#include <stdio.h>

int main() {
    float kWh, bill = 0.0;

    // Nhập số kWh tiêu thụ
    printf("Nhap so dien (kWh) da su dung: ");
    scanf("%f", &kWh);

    // Tính tiền điện theo bậc
    if (kWh <= 50) {
        bill = kWh * 1.678;  // Giá bậc 1
    } else if (kWh <= 100) {
        bill = 50 * 1.678 + (kWh - 50) * 1.734;  // Bậc 2
    } else if (kWh <= 200) {
        bill = 50 * 1.678 + 50 * 1.734 + (kWh - 100) * 2.014;  // Bậc 3
    } else if (kWh <= 300) {
        bill = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (kWh - 200) * 2.536;  // Bậc 4
    } else {
        bill = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (kWh - 300) * 2.834;  // Bậc 5
    }

    // In ra kết quả
    printf("Tong so tien dien can tra: %.2f VND\n", bill);

    return 0;
}
