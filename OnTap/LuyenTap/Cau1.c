// Đề Tính Tổng Các Chữ Số Nhập Vào
#include <stdio.h>

int main (){
    int number = 0;
    int sum = 0;
    int digit = 0;

    printf("Nhap chu so ban muon kiem tra:");
    scanf("%d", &number);

    while(number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    printf("Tong cua so khi cong tung so la: %d", sum);
}