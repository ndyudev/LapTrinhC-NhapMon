#include <stdio.h>

int main() {
    int n, m;

    // Mời người dùng nhập vào số hàng n và số cột m
    printf("Nhap so hang (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);

    int mang[n][m]; // Tạo mảng 2 chiều

    // Nhập dữ liệu vào ma trận
    printf("Nhap cac phan tu cho ma tran:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("mang[%d][%d] = ", i, j);
            scanf("%d", &mang[i][j]);
        }
    }

    // Xuất mảng bình phương
    printf("Ma tran binh phuong:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", mang[i][j] * mang[i][j]); // Xuất bình phương của từng phần tử
        }
        printf("\n"); // Xuống dòng sau mỗi hàng
    }

    return 0;
}