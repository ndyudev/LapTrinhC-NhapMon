#include <stdio.h>
#include <stdlib.h>

// Hàm hiển thị menu
void displayMenu() {
    printf("============================================\n");
    printf("||            CHUONG TRINH TONG HOP       ||\n");
    printf("============================================\n");
    printf("||    1. Kiem tra so nguyen               ||\n");
    printf("||    2. Tim uoc so chung, boi so chung   ||\n");
    printf("||    3. Tinh tien Karaoke                ||\n");
    printf("||    4. Tinh tien dien                   ||\n");
    printf("||    5. Chuc nang doi tien               ||\n");
    printf("||    6. Tinh lai suat vay ngan hang      ||\n");
    printf("||    7. Vay tien mua xe                  ||\n");
    printf("||    8. Sap xep thong tin sinh vien      ||\n");
    printf("||    9. Game FPOLY-LOTT                  ||\n");
    printf("||   10. Tinh toan phan so                ||\n");
    printf("||   11. Thoat chuong trinh               ||\n");
    printf("============================================\n");
    printf("Nhap lua chon cua ban: ");
}

// 1. Kiểm tra số nguyên
void kiemTraSoNguyen() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    printf("So %d la so nguyen hop le.\n", n);
}

// 2. Tìm UCLN và BCNN
void timUCLNBCNN() {
    int a, b, ucln, bcnn, tempA, tempB;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);
    tempA = a;
    tempB = b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    ucln = a;
    bcnn = (tempA * tempB) / ucln;
    printf("UCLN: %d, BCNN: %d\n", ucln, bcnn);
}

// 3. Tính tiền karaoke
void tinhTienKaraoke() {
    int gioBatDau, gioKetThuc;
    const int GIA_MOI_GIO = 30000;
    printf("Nhap gio bat dau (0-24): ");
    scanf("%d", &gioBatDau);
    printf("Nhap gio ket thuc (0-24): ");
    scanf("%d", &gioKetThuc);
    if (gioKetThuc <= gioBatDau || gioBatDau < 0 || gioKetThuc > 24) {
        printf("Gio nhap khong hop le!\n");
    } else {
        int tongTien = (gioKetThuc - gioBatDau) * GIA_MOI_GIO;
        printf("Tien karaoke: %d VND\n", tongTien);
    }
}

// 4. Tính tiền điện
void tinhTienDien() {
    int soDien;
    printf("Nhap so dien tieu thu: ");
    scanf("%d", &soDien);
    if (soDien <= 50) {
        printf("Tien dien: %d VND\n", soDien * 1000);
    } else if (soDien <= 100) {
        printf("Tien dien: %d VND\n", 50 * 1000 + (soDien - 50) * 1200);
    } else {
        printf("Tien dien: %d VND\n", 50 * 1000 + 50 * 1200 + (soDien - 100) * 1500);
    }
}

// 5. Đổi tiền
void doiTien() {
    int soTien, menhGia[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    printf("Nhap so tien: ");
    scanf("%d", &soTien);
    printf("Ket qua doi tien:\n");
    for (int i = 0; i < 9; i++) {
        if (soTien >= menhGia[i]) {
            printf("%d to %d\n", soTien / menhGia[i], menhGia[i]);
            soTien %= menhGia[i];
        }
    }
}

// 6. Tính lãi suất vay ngân hàng
void tinhLaiSuat() {
    double tienVay, laiSuat, thoiGian, tongTien;
    printf("Nhap so tien vay: ");
    scanf("%lf", &tienVay);
    printf("Nhap lai suat (%): ");
    scanf("%lf", &laiSuat);
    printf("Nhap thoi gian vay (nam): ");
    scanf("%lf", &thoiGian);
    tongTien = tienVay + (tienVay * laiSuat / 100 * thoiGian);
    printf("Tong so tien phai tra: %.2lf VND\n", tongTien);
}

// 7. Vay tiền mua xe
void vayTienMuaXe() {
    double giaXe, laiSuat, thoiGian, traGop;
    printf("Nhap gia xe: ");
    scanf("%lf", &giaXe);
    printf("Nhap lai suat (%): ");
    scanf("%lf", &laiSuat);
    printf("Nhap thoi gian vay (nam): ");
    scanf("%lf", &thoiGian);
    traGop = giaXe * (1 + laiSuat / 100 * thoiGian) / (thoiGian * 12);
    printf("So tien tra hang thang: %.2lf VND\n", traGop);
}

// 8. Sắp xếp thông tin sinh viên
void sapXepSinhVien() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    char ten[n][50];
    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien %d: ", i + 1);
        scanf("%s", ten[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(ten[i], ten[j]) > 0) {
                char temp[50];
                strcpy(temp, ten[i]);
                strcpy(ten[i], ten[j]);
                strcpy(ten[j], temp);
            }
        }
    }
    printf("Danh sach sinh vien sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", ten[i]);
    }
}

// 9. Game FPOLY-LOTT
void gameFPOLYLOTT() {
    int soNguoiChoi, soMay;
    printf("Nhap so cua ban (1-100): ");
    scanf("%d", &soNguoiChoi);
    soMay = rand() % 100 + 1;
    if (soNguoiChoi == soMay) {
        printf("Chuc mung! Ban da trung giai!\n");
    } else {
        printf("Rat tiec, so may la %d. Chuc ban may man lan sau!\n", soMay);
    }
}

// 10. Tính toán phân số
void tinhPhanSo() {
    int tu1, mau1, tu2, mau2, tuKetQua, mauKetQua;
    printf("Nhap phan so thu nhat (tu mau): ");
    scanf("%d %d", &tu1, &mau1);
    printf("Nhap phan so thu hai (tu mau): ");
    scanf("%d %d", &tu2, &mau2);
    tuKetQua = tu1 * mau2 + tu2 * mau1;
    mauKetQua = mau1 * mau2;
    printf("Tong hai phan so: %d/%d\n", tuKetQua, mauKetQua);
}

// Hàm chính
int main() {
    int choice;
    do {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1: kiemTraSoNguyen(); break;
            case 2: timUCLNBCNN(); break;
            case 3: tinhTienKaraoke(); break;
            case 4: tinhTienDien(); break;
            case 5: doiTien(); break;
            case 6: tinhLaiSuat(); break;
            case 7: vayTienMuaXe(); break;
            case 8: sapXepSinhVien(); break;
            case 9: gameFPOLYLOTT(); break;
            case 10: tinhPhanSo(); break;
            case 11: printf("Thoat chuong trinh. Tam biet!\n"); break;
            default: printf("Lua chon khong hop le! Vui long thu lai.\n");
        }
    } while (choice != 11);
    return 0;
}
