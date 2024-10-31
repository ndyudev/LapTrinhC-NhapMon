#include <stdio.h>

#define VAT 0.1  // Thuế VAT 10%

// Hàm tính toán tiền điện từng bậc
float tinhTienDien(float kWh) {
    float bill = 0.0;

    if (kWh <= 50) {
        bill = kWh * 1.678;  // Bậc 1
    } else if (kWh <= 100) {
        bill = 50 * 1.678 + (kWh - 50) * 1.734;  // Bậc 2
    } else if (kWh <= 200) {
        bill = 50 * 1.678 + 50 * 1.734 + (kWh - 100) * 2.014;  // Bậc 3
    } else if (kWh <= 300) {
        bill = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (kWh - 200) * 2.536;  // Bậc 4
    } else {
        bill = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (kWh - 300) * 2.834;  // Bậc 5
    }

    return bill;
}

// Hàm tính khuyến mãi (giảm giá) nếu dùng nhiều
float tinhKhuyenMai(float kWh, float bill) {
    if (kWh > 400) {
        return bill * 0.05;  // Giảm 5% nếu dùng > 400 kWh
    } else if (kWh > 500) {
        return bill * 0.1;  // Giảm 10% nếu dùng > 500 kWh
    }
    return 0;
}

// Hàm chính
int main() {
    float kWh, bill, discount, totalAfterVAT;
    char detail;

    // Nhập số điện tiêu thụ
    printf("Nhap so dien (kWh) da su dung: ");
    scanf("%f", &kWh);

    // Tính tiền điện và khuyến mãi
    bill = tinhTienDien(kWh);
    discount = tinhKhuyenMai(kWh, bill);
    float billAfterDiscount = bill - discount;
    totalAfterVAT = billAfterDiscount * (1 + VAT);

    // In chi tiết hóa đơn
    printf("\n===== Hoa Don Dien Nang =====\n");
    printf("So dien tieu thu: %.2f kWh\n", kWh);
    printf("Tien dien (truoc giam gia): %.2f VND\n", bill);
    if (discount > 0) {
        printf("Khuyen mai: -%.2f VND\n", discount);
    }
    printf("Tien sau khi giam gia: %.2f VND\n", billAfterDiscount);
    printf("Thue VAT (10%%): %.2f VND\n", billAfterDiscount * VAT);
    printf("Tong so tien can tra: %.2f VND\n", totalAfterVAT);
    printf("=============================\n");

    return 0;
}
