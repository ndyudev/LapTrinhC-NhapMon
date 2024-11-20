#include <stdio.h>

// Hàm kiểm tra năm nhuận
int checkYear(int year) {
    int flag = 0;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        flag = 1;
    }
    return flag;
}

int main() {
    int year;
    printf("Nhap vao nam: ");
    scanf("%d", &year);

    if (checkYear(year)) {
        printf("%d la nam nhuan.\n", year);
    } else {
        printf("%d khong phai la nam nhuan.\n", year);
    }

    return 0;
}
