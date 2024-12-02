#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Khai báo mảng với kích thước n
    int arr[n];
    int tong = 0; // Khởi tạo tổng
    int hieu = 0; // Khởi tạo hiệu

    // Nhập các phần tử vào mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap cac phan tu cho arr[%d]: ", i);
        scanf("%d", &arr[i]); // Sửa lỗi: cần sử dụng &arr[i]
    }

    // Tính tổng và hiệu
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) { // Sửa lỗi: sử dụng % để kiểm tra số chẵn
            tong += arr[i]; // Cộng vào tổng
        } else {
            hieu += arr[i]; // Cộng vào hiệu
        }
    }

    // Xuất kết quả
    printf("Tong cac phan tu chan: %d\n", tong);
    printf("Tong cac phan tu le: %d\n", hieu);

    return 0;
}
