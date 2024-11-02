#include <stdio.h>

int main() {
    float diem;
    printf("Nhap vao diem cua ban (0-10): ");
    scanf("%f", &diem);

    if (diem >= 9 && diem <= 10) {
        printf("Hoc sinh xuat sac\n");
    } else if (diem >= 8 && diem < 9) {
        printf("Hoc sinh gioi\n");
    } else if (diem >= 6.5 && diem < 8) {
        printf("Hoc sinh kha\n");
    } else if (diem >= 5 && diem < 6.5) {
        printf("Hoc sinh trung binh\n");
    } else if (diem >= 3.5 && diem < 5) {
        printf("Hoc sinh yeu\n");
    } else if (diem >= 0 && diem < 3.5) {
        printf("Hoc sinh kem\n");
    } else {
        printf("Diem khong hop le. Vui long nhap lai.\n");
    }

    return 0;
}
