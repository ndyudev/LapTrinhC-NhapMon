#include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

    // Bài 1: Tính góc quay
    int tinhGocQuay(float giaTriNumVan) {
        if (giaTriNumVan < 0 || giaTriNumVan > 10) {
            return -1;
        }
        return (int)((giaTriNumVan / 10) * 360);
    }

    void bai1() {
        float giaTriNumVan;
        printf("Nhap gia tri num van (0-10): ");
        scanf("%f", &giaTriNumVan);

        int gocQuay = tinhGocQuay(giaTriNumVan);

        if (gocQuay == -1) {
            printf("Gia tri num van khong hop le.\n");
        } else {
            printf("Goc quay cua dong co servo: %d do\n", gocQuay);
        }
    }

    // Bài 2: Tính tiền nước
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

        return tienNuoc;
    }

    void bai2() {
        int soNguoi;
        float chiSoMoi, chiSoCu;
        float thueGTGT, phiXuLyNuocThai, thueXuLyNuocThai;
        float tienNuocGoc, tongTienNuoc;

        printf("Nhap so nguoi: ");
        scanf("%d", &soNguoi);

        printf("Nhap chi so nuoc moi: ");
        scanf("%f", &chiSoMoi);

        printf("Nhap chi so nuoc cu: ");
        scanf("%f", &chiSoCu);

        tienNuocGoc = tinhTienNuoc(soNguoi, chiSoMoi, chiSoCu);

        if (tienNuocGoc == -1) {
            printf("Chi so nuoc khong hop le.\n");
        } else {
            thueGTGT = tienNuocGoc * 0.05;
            phiXuLyNuocThai = tienNuocGoc * 0.20;
            thueXuLyNuocThai = phiXuLyNuocThai * 0.10;
            tongTienNuoc = tienNuocGoc + thueGTGT + phiXuLyNuocThai + thueXuLyNuocThai;

            printf("Tien nuoc goc: %.0f VND\n", tienNuocGoc);
            printf("Thue GTGT (5%%): %.0f VND\n", thueGTGT);
            printf("Phi xu ly nuoc thai (20%%): %.0f VND\n", phiXuLyNuocThai);
            printf("Thue xu ly nuoc thai (10%%): %.0f VND\n", thueXuLyNuocThai);
            printf("Tong tien nuoc: %.0f VND\n", tongTienNuoc);
        }
    }

    // Bài 3: Tính năng lượng và công suất
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
            if (taiTrong > 0) {
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

    void bai3() {
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
        }
    }

    // Bài 4: Tính pin tiêu hao và quãng đường
    int xacDinhTrangThaiPin(float pinConLai) {
        if (pinConLai >= 50.0)
            return 1;
        else if (pinConLai >= 20.0)
            return 2;
        else
            return 3;
    }

    float pinTieuHaoTheoK(int k, int trangThaiPin) {
        switch (k) {
            case 1:
                return 3.0;
            case 2:
                if (trangThaiPin == 1) return 3.6;
                if (trangThaiPin == 2) return 4.9;
                if (trangThaiPin == 3) return 7.0;
                break;
            case 3:
                if (trangThaiPin == 1) return 8.0;
                if (trangThaiPin == 2) return 10.5;
                if (trangThaiPin == 3) return -1.0;
            case 4:
                if (trangThaiPin == 1) return 4.4;
                if (trangThaiPin == 2) return 5.3;
                if (trangThaiPin == 3) return -1.0;
                break;
            default:
                return -2.0;
        }
        return -2.0;
    }

    float lamTron(float so) {
        return round(so * 100) / 100.0;
    }

    void bai4() {
        float pinConLai;
        int k;

        printf("Nhap phan tram pin con lai: ");
        scanf("%f", &pinConLai);
        printf("Nhap tham so loai duong (1: Cao toc, 2: Dong dan cu, 3: Deo/doc, 4: Duong hon hop): ");
        scanf("%d", &k);

        int trangThaiPin = xacDinhTrangThaiPin(pinConLai);
        if (trangThaiPin == 1) {
            printf("Trang thai pin: Tot\n");
        } else if (trangThaiPin == 2) {
            printf("Trang thai pin: Yeu\n");
        } else {
            printf("Trang thai pin: Can\n");
        }

        float pinTieuHao = pinTieuHaoTheoK(k, trangThaiPin);
        if (pinTieuHao == -1.0) {
            printf("Canh bao: Pin can.\n");
            return;
        }
        if (pinTieuHao == -2.0) {
            printf("Loi.\n");
            return;
        }

        float quangDuong = (pinConLai / pinTieuHao) * 5.0;
        quangDuong = lamTron(quangDuong);
        printf("Xe di duoc toi da %.2f km.\n", quangDuong);
    }

    float tinhQuangDuong(int hanhTrinh[], int soPhanTu) {
    float pin = 100;
    float quangDuong = 0;
    int i;

    for (i = 0; i < soPhanTu; i++) {
        int giaTri = hanhTrinh[i];

        if (giaTri > 0) {
            float quangDuongDiDuoc = pin * 2.15;
            if (quangDuongDiDuoc >= giaTri) {
                quangDuong += giaTri;
                pin -= (float)giaTri / 2.15;
            } else {
                quangDuong += quangDuongDiDuoc;
                pin = 0;
                break;
            }
        } else if (giaTri == 0) {
            pin += 25;
            if (pin > 100) {
                pin = 100;
            }
        } else {
            float pinDuocSac = fabs(giaTri) / 10.0;
            pin += pinDuocSac;
            if (pin > 100) {
                pin = 100;
            }
        }
        if (pin <= 0) {
            pin = 0;
            break;
        }
    }

    return quangDuong;
}

void bai5() {
    int hanhTrinh[100];
    int soPhanTu = 0;

    printf("Nhap hanh trinh (nhap 0 de ket thuc): ");
    int giaTri;
    while (scanf("%d", &giaTri) == 1 && giaTri != 0) {
        hanhTrinh[soPhanTu++] = giaTri;
    }
    
    if (giaTri == 0 && soPhanTu == 0) {
        printf("Hanh trinh trong!\n");
        return;
    }

    float quangDuongDiDuoc = tinhQuangDuong(hanhTrinh, soPhanTu);
    printf("Quang duong di duoc: %.1f km\n", quangDuongDiDuoc);
}
    // Menu chính
    int main() {
        int luaChon;
        do {
            printf("\n===== MENU =====\n");
            printf("1. Bai 1: Tinh goc quay\n");
            printf("2. Bai 2: Tinh tien nuoc\n");
            printf("3. Bai 3: Ting Nang Luong Thang May\n");
            printf("4. Bai 4: Tinh pin tieu hao\n");
            printf("5. Bai 5: Quang Duong\n");
            printf("6. Thoat\n");
            printf("Lua chon cua ban: ");
            scanf("%d", &luaChon);

            switch (luaChon) {
                case 1:
                    bai1();
                    break;
                case 2:
                    bai2();
                    break;
                case 3:
                    bai3();
                    break;
                case 4:
                    bai4();
                    break;
                case 5:
                    bai5();
                    break;
                case 6:
                    printf("Tam biet!\n");
                    break;
                default:
                    printf("Lua chon khong hop le.\n");
            }
        } while (luaChon != 6);

        return 0;
    }