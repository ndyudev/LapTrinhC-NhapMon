#include <stdio.h>

int main() {
    int x;
    int count = 0;  // Biến đếm để kiểm tra số lượng ước của x

    // Nhập số x từ bàn phím
    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);

    // Kiểm tra nếu x nhỏ hơn hoặc bằng 1 thì không phải là số nguyên tố
    if (x <= 1) {
        printf("%d khong phai la so nguyen to.\n", x);
        return 0;  // Kết thúc chương trình sớm nếu x <= 1
    }

    // Vòng lặp kiểm tra số nguyên tố
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {  // Nếu x chia hết cho i
            count++;       // Tăng biến đếm count nếu tìm thấy ước số
            break;         // Ngắt vòng lặp ngay khi tìm thấy một ước số khác 1 và x
        }
    }

    // Kết luận
    if (count == 0) {
        printf("%d la so nguyen to.\n", x);
    } else {
        printf("%d khong phai la so nguyen to.\n", x);
    }

    return 0;
}
