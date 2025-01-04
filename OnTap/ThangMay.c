#include <stdio.h>
#include <stdlib.h>

int tinhNangLuong(int tangHienTai, int tangDen, int taiTrong) {
    if (taiTrong < 0) {
        return -1;
    }

    int soTang = abs(tangDen - tangHienTai);
    int nangLuong = 0;
    int len = (tangDen > tangHienTai) ? 1 : -1;

    if (taiTrong <= 1000) {
        nangLuong = soTang * taiTrong * (len == 1 ? 7 : 5);
    } else if (taiTrong <= 1600) {
        nangLuong = soTang * ((len == 1 ? 12 : 7) * (taiTrong > 600 ? 600 : taiTrong) + (len == 1 ? 7 : 5) * (taiTrong > 1000 ? 1000 : taiTrong));
    } else if (taiTrong <= 2600) {
        nangLuong = soTang * ((len == 1 ? 12 : 7) * 600 + (len == 1 ? 7 : 5) * 1000);
        taiTrong -= 1600;
        if (taiTrong > 0)
        {
            nangLuong += soTang * taiTrong * (len == 1 ? 7 : 5);
        }
    }

    return nangLuong;
}

int tinhCongSuat(int taiTrong, int tangHienTai, int tangDen) {
    int congSuatCoBan = 500;
    int congSuatTheoTaiTrong = 2;
    int congSuatTheoTang = 100;
    int soTang = abs(tangDen - tangHienTai);

    if (taiTrong < 0) {
        return -1;
    }

    int congSuat = congSuatCoBan + (congSuatTheoTaiTrong * taiTrong) + (congSuatTheoTang * soTang);
    return congSuat;
}

int main() {
    int tangHienTai, tangDen, taiTrong;

    printf("Nhap tang hien tai: ");
    scanf("%d", &tangHienTai);

    printf("Nhap tang can den: ");
    scanf("%d", &tangDen);

    printf("Nhap tai trong (kg): ");
    scanf("%d", &taiTrong);

    int nangLuongTieuThu = tinhNangLuong(tangHienTai, tangDen, taiTrong);
    int congSuatTieuThu = tinhCongSuat(taiTrong, tangHienTai, tangDen);

    if (nangLuongTieuThu == -1 || congSuatTieuThu == -1) {
        printf("Tai trong khong hop le.\n");
    } else {
        printf("Nang luong tieu thu: %d W\n", nangLuongTieuThu);
        printf("Cong suat tieu thu: %d W\n", congSuatTieuThu);
    }

    return 0;
}