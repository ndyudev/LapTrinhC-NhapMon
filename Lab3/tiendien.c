#include <stdio.h>

int main() {
    int kWh;
    float total = 0;

    // Nhập vào số kWh tiêu thụ
    printf("Nhap vao so kWh tieu thu hang thang: ");
    scanf("%d", &kWh);

    if (kWh <= 50) {
        total = kWh * 1678;
    } else if (kWh <= 100) {
        total = 50 * 1678 + (kWh - 50) * 1734;
    } else if (kWh <= 200) {
        total = 50 * 1678 + 50 * 1734 + (kWh - 100) * 2014;
    } else if (kWh <= 300) {
        total = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kWh - 200) * 2536;
    } else if (kWh <= 400) {
        total = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kWh - 300) * 2834;
    } else {
        total = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kWh - 400) * 2927;
    }

    // Hiển thị số tiền cần phải đóng
    printf("So tien dien phai dong: %.2f VND\n", total);

    return 0;
}
