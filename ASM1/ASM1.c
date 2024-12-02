#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

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
    
    // Kiểm tra số nguyên
    printf("So %d %s so nguyen hop le.\n", n, (n == (int)n) ? "la" : "khong phai la");
    
    // Kiểm tra số nguyên tố
    int i, isPrime = 1;
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    printf("So %d %s so nguyen to.\n", n, (isPrime) ? "la" : "khong phai la");
    
    // Kiểm tra số chính phương
    int sqrt_n = sqrt(n);
    printf("So %d %s so chinh phuong.\n", n, (sqrt_n * sqrt_n == n) ? "la" : "khong phai la");
}

// 2. Tìm UCLN và BCNN
void timUCLNBCNN() {
    int a, b, ucln, bcnn;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);
    
    // Kiểm tra đầu vào
    if (a <= 0 || b <= 0) {
        printf("Hai so phai lon hon 0.\n");
        return;
    }
    
    int tempA = a, tempB = b;
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
    const int GIA_GIAM = 30;
    
    printf("Nhap gio bat dau (0-23): ");
    scanf("%d", &gioBatDau);
    printf("Nhap gio ket thuc (0-23): ");
    scanf("%d", &gioKetThuc);
    
    if (gioKetThuc <= gioBatDau || gioBatDau < 0 || gioKetThuc > 23) {
        printf("Gio nhap khong hop le!\n");
        return;
    }
    
    int tongTien = 0;
    int thoiGian = gioKetThuc - gioBatDau;
    if (thoiGian <= 3) {
        tongTien = thoiGian * GIA_MOI_GIO;
    } else {
        tongTien = 3 * GIA_MOI_GIO + (thoiGian - 3) * GIA_MOI_GIO * (100 - GIA_GIAM) / 100;
        if (gioBatDau >= 14 && gioBatDau < 17) {
            tongTien *= 0.9;
        }
    }
    printf("Tien karaoke: %d VND\n", tongTien);
}

// 4. Tính tiền điện
void tinhTienDien() {
    int soDien;
    printf("Nhap so dien tieu thu: ");
    scanf("%d", &soDien);
    
    if (soDien < 0) {
        printf("So dien khong hop le!\n");
        return;
    }
    
    int tienDien;
    if (soDien <= 50) {
        tienDien = soDien * 1678;
    } else if (soDien <= 100) {
        tienDien = 50 * 1678 + (soDien - 50) * 1734;
    } else if (soDien <= 200) {
        tienDien = 50 * 1678 + 50 * 1734 + (soDien - 100) * 2014;
    } else if (soDien <= 300) {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (soDien - 200) * 2536;
    } else if (soDien <= 400) {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (soDien - 300) * 2834;
    } else {
        tienDien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (soDien - 400) * 2927;
    }
    printf("Tien dien: %d VND\n", tienDien);
}

// 5. Đổi tiền
void doiTien() {
    int soTien;
    int menhGia[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    
    printf("Nhap so tien: ");
    scanf("%d", &soTien);
    
    if (soTien < 0) {
        printf("So tien khong hop le!\n");
        return;
    }
    
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
    printf("Nhap thoi gian vay (thang): ");
    scanf("%lf", &thoiGian);
    
    if (tienVay < 0 || laiSuat < 0 || thoiGian < 0) {
        printf("Thong tin nhap khong hop le!\n");
        return;
    }
    
    tongTien = tienVay + (tienVay * laiSuat / 100 * thoiGian / 12);
    printf("Tong so tien phai tra: %.2lf VND\n", tongTien);
}

// 7. Vay tiền mua xe
void vayTienMuaXe() {
    double giaXe, phanTramVay, laiSuat, thoiGian, traGop;
    
    printf("Nhap gia xe: ");
    scanf("%lf", &giaXe);
    printf("Nhap phan tram vay (%): ");
    scanf("%lf", &phanTramVay);
    printf("Nhap lai suat (%): ");
    scanf("%lf", &laiSuat);
    printf("Nhap thoi gian vay (thang): ");
    scanf("%lf", &thoiGian);
    
    if (giaXe < 0 || phanTramVay < 0 || phanTramVay > 100 || laiSuat < 0 || thoiGian < 0) {
        printf("Thong tin nhap khong hop le!\n");
        return;
    }
    
    double tienVay = giaXe * phanTramVay / 100;
    traGop = tienVay * (1 + laiSuat / 100 * thoiGian / 12) / (thoiGian);
    printf("So tien tra truoc: %.2lf VND\n", giaXe * (1 - phanTramVay / 100));
    printf("So tien tra hang thang: %.2lf VND\n", traGop);
}

// 8. Sắp xếp thông tin sinh viên
void sapXepSinhVien() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("So luong sinh vien khong hop le!\n");
        return;
    }
    
    struct SinhVien {
        char ten[50];
        float diem;
        char hocLuc[20];
    } sinhVien[n];
    
    // Nhập thông tin sinh viên
    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien %d: ", i + 1);
        scanf("%s", sinhVien[i].ten);
        printf("Nhap diem sinh vien %d: ", i + 1);
        scanf("%f", &sinhVien[i].diem);
        
        // Xác định học lực
        if (sinhVien[i].diem >= 9.0) {
            strcpy(sinhVien[i].hocLuc, "Xuat sac");
        } else if (sinhVien[i].diem >= 8.0) {
            strcpy(sinhVien[i].hocLuc, "Gioi");
        } else if (sinhVien[i].diem >= 6.5) {
            strcpy(sinhVien[i].hocLuc, "Kha");
        } else if (sinhVien[i].diem >= 5.0) {
            strcpy(sinhVien[i].hocLuc, "Trung binh");
        } else {
            strcpy(sinhVien[i].hocLuc, "Yeu");
        }
    }
    
    // Sắp xếp sinh viên theo điểm giảm dần
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (sinhVien[i].diem < sinhVien[j].diem) {
                struct SinhVien temp = sinhVien[i];
                sinhVien[i] = sinhVien[j];
                sinhVien[j] = temp;
            }
        }
    }
    
    // In danh sách sinh viên
    printf("Danh sach sinh vien sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("Ten: %s, Diem: %.2f, Hoc luc: %s\n", sinhVien[i].ten, sinhVien[i].diem, sinhVien[i].hocLuc);
    }
}

// 9. Game FPOLY-LOTT
void gameFPOLYLOTT() {
    int soNguoiChoi, soMay;
    printf("Nhap so cua ban (1-15): ");
    scanf("%d", &soNguoiChoi);
    
    if (soNguoiChoi < 1 || soNguoiChoi > 15) {
        printf("So nhap khong hop le! Vui long nhap so tu 1 den 15.\n");
        return;
    }
    
    soMay = rand() % 15 + 1;
    if (soNguoiChoi == soMay) {
        printf("Chuc mung! Ban da trung giai!\n");
    } else if (soNguoiChoi == soMay - 1 || soNguoiChoi == soMay + 1) {
        printf("Chuc mung! Ban da trung giai nhi!\n");
    } else {
        printf("Rat tiec, so may la %d. Chuc ban may man lan sau!\n", soMay);
    }
}

// 10. Tính toán phân số
void tinhPhanSo() {
    int tu1, mau1, tu2, mau2;
    printf("Nhap phan so thu nhat (tu mau): ");
    scanf("%d %d", &tu1, &mau1);
    printf("Nhap phan so thu hai (tu mau): ");
    scanf("%d %d", &tu2, &mau2);
    
    if (mau1 == 0 || mau2 == 0) {
        printf("Mau so khong duoc bang 0!\n");
        return;
    }
    
    int tuKetQua = tu1 * mau2 + tu2 * mau1;
    int mauKetQua = mau1 * mau2;
    printf("Tong hai phan so: %d/%d\n", tuKetQua, mauKetQua);
}

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
