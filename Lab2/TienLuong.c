#include <stdio.h>

float gioLamViec, luongTheoGio, luongNhan;

int main() {
    printf("Nhap so gio lam cua ban:\n");
    scanf("%f", &gioLamViec);

    printf("Nhap tien tren gio cua ban:\n");
    scanf("%f", &luongTheoGio);
    
    luongNhan = (gioLamViec <= 60) * (gioLamViec * luongTheoGio) + (gioLamViec > 60) * (60 * luongTheoGio + (gioLamViec - 60) * 2 * luongTheoGio);

    printf("Luong cua ban: %.2f\n", luongNhan);
    return 0;
}
