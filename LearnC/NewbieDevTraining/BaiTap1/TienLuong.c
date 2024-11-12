#include <stdio.h>

int main() {
    float soGioLam, luongMotGio, tienLuong;

    printf("Nhap so gio lam: ");
    scanf("%f", &soGioLam);
    printf("Nhap luong 1 gio: ");
    scanf("%f", &luongMotGio);

    tienLuong = (soGioLam > 60) * (luongMotGio * 60 + (soGioLam - 60) * 2 * luongMotGio) + (soGioLam <= 60) * ( soGioLam * luongMotGio);

    printf("Tien luong tong cong la: %.2f\n", tienLuong);

    return 0;
}
