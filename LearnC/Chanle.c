#include <stdio.h>

int main() {
    int so; // Sử dụng kiểu int để kiểm tra số nguyên

    printf("Nhap vao so muon kiem tra:\n");
    scanf("%d", &so);

    if (so % 2 == 0) {
        printf("So nay la so chan\n");
    } else {
        printf("So nay la so le\n");
        scanf("%d",&so);
    }
    printf("Ket Thuc chuong trinh\n");
    return 0;
    //Oke
}