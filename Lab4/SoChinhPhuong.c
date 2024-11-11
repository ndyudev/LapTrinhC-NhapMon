#include <stdio.h>

int main() {
    int x;
    int isSquare = 0;  // Biến đánh dấu để kiểm tra xem x có phải là số chính phương

    // Nhập số x từ bàn phím
    printf("Nhap vao so nguyen x: ");
    scanf("%d", &x);

    // Nếu x < 0, thì chắc chắn không phải là số chính phương
    if (x < 0) {
        printf("%d khong phai la so chinh phuong.\n", x);
        return 0;
    }

    // Vòng lặp kiểm tra số chính phương
    for (int i = 1; i * i <= x; i++) {
        if (i * i == x) {  // Nếu i * i bằng x
            isSquare = 1;  // Đánh dấu x là số chính phương
            break;         // Ngắt vòng lặp vì đã tìm thấy
        }
    }

    // Kết luận
    if (isSquare) {
        printf("%d la so chinh phuong.\n", x);
    } else {
        printf("%d khong phai la so chinh phuong.\n", x);
    }

    return 0;
}
