#include <stdio.h>
#include <math.h>

float tinhTienNuoc(int soNguoi, float chiSoMoi, float chiSoCu) {
    if (soNguoi < 0 || chiSoMoi < 0 || chiSoCu < 0 || chiSoMoi < chiSoCu) {
        return -1;
    }

    if (soNguoi > 5) {
        soNguoi = 5;
    }

    float luongNuoc = chiSoMoi - chiSoCu;
    if (luongNuoc < 0) return -1;

    float tienNuoc = 0;

    if (luongNuoc < 4) {
        tienNuoc = luongNuoc * 6700;
    } else if (luongNuoc <= 6) {
        tienNuoc = 4 * 6700 + (luongNuoc - 4) * 12900;
    } else {
        tienNuoc = 4 * 6700 + 2 * 12900 + (luongNuoc - 6) * 14400;
    }

    float thueGTGT = tienNuoc * 0.05;
    float phiXuLyNuocThai = tienNuoc * 0.20;
    float thueXuLyNuocThai = phiXuLyNuocThai * 0.10;

    tienNuoc += thueGTGT + phiXuLyNuocThai + thueXuLyNuocThai;

    return tienNuoc;
}

int main() {
    int soNguoi;
    float chiSoMoi, chiSoCu;

    printf("Nhap so nguoi: ");
    scanf("%d", &soNguoi);

    printf("Nhap chi so nuoc moi: ");
    scanf("%f", &chiSoMoi);

    printf("Nhap chi so nuoc cu: ");
    scanf("%f", &chiSoCu);

    float ketQua = tinhTienNuoc(soNguoi, chiSoMoi, chiSoCu);

    if (ketQua == -1) {
        printf("Chi so nuoc khong hop le.\n");
    } else {
        printf("Tien nuoc: %.0f VND\n", ketQua);
    }

    return 0;
}