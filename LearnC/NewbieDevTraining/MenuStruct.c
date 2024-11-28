// Srore : điểm C , Điểm Java, Web
// Address : Tên Đường , Tên Phường , TP
// InfoStudent: tên, tuổi, mssv, email, sdt, địa chỉ, điểm C, Điểm Java, Điểm Web
// Viết Menu : In ra thông tin sinh viên
// In ra sv có điểm tb lớn hơn 5 và lớn hơn 8
// In ra InfoStudent có ở tphcm 
// In ra InfoStudent có tuổi > 18
// In ra InfoStudent  thỏa điều kiện có điểm C > 8 và điểm Java  < 8

#include <stdio.h>
#include <string.h>

// Struct Address
struct Address {
    char duong[25];
    char phuong[25];
    char thanhpho[25];
};

// Struct Score
struct Score {
    float C;
    float Java;
    float Web;
};

// Struct InfoStudent
struct InfoStudent {
    char name[50];
    int age;
    char mssv[15];
    char email[50];
    char sdt[15];
    struct Address address;
    struct Score score;
};

// Hàm hiển thị menu
void displayMenu() {
    printf("\n========== Menu ==========\n");
    printf("1. In danh sách sinh viên\n");
    printf("2. In sinh viên có điểm TB > 5 và > 8\n");
    printf("3. In sinh viên ở TP.HCM\n");
    printf("4. In sinh viên có tuổi > 18\n");
    printf("5. In sinh viên có điểm C > 8 và Java < 8\n");
    printf("6. Thoat\n");
    printf("==========================\n");
    printf("Nhap lua chon: ");
}

// Hàm nhập thông tin sinh viên
void inputInfoStudent(struct InfoStudent* sv) {
    printf("Nhap ten: ");
    scanf(" %[^\n]", sv->name);
    printf("Nhap tuoi: ");
    scanf("%d", &sv->age);
    printf("Nhap MSSV: ");
    scanf(" %[^\n]", sv->mssv);
    printf("Nhap email: ");
    scanf(" %[^\n]", sv->email);
    printf("Nhap so dien thoai: ");
    scanf(" %[^\n]", sv->sdt);

    printf("Nhap dia chi:\n");
    printf("  Ten duong: ");
    scanf(" %[^\n]", sv->address.duong);
    printf("  Ten phuong: ");
    scanf(" %[^\n]", sv->address.phuong);
    printf("  Thanh pho: ");
    scanf(" %[^\n]", sv->address.thanhpho);

    printf("Nhap diem mon hoc:\n");
    printf("  Diem C: ");
    scanf("%f", &sv->score.C);
    printf("  Diem Java: ");
    scanf("%f", &sv->score.Java);
    printf("  Diem Web: ");
    scanf("%f", &sv->score.Web);
}

// Hàm xuất thông tin sinh viên
void outputInfoStudent(struct InfoStudent sv) {
    printf("\nThong tin sinh vien:\n");
    printf("Ten        : %s\n", sv.name);
    printf("Tuoi       : %d\n", sv.age);
    printf("MSSV       : %s\n", sv.mssv);
    printf("Email      : %s\n", sv.email);
    printf("SDT        : %s\n", sv.sdt);
    printf("Dia chi    : %s, %s, %s\n", sv.address.duong, sv.address.phuong, sv.address.thanhpho);
    printf("Diem C     : %.2f\n", sv.score.C);
    printf("Diem Java  : %.2f\n", sv.score.Java);
    printf("Diem Web   : %.2f\n", sv.score.Web);
}

// Hàm tính điểm trung bình
float tinhDiemTB(struct Score score) {
    return (score.C + score.Java + score.Web) / 3.0;
}

// Hàm kiểm tra và in sinh viên theo điều kiện
void inSVDiemTBLonHon(struct InfoStudent sv[], int n, float diem) {
    printf("\nDanh sach sinh vien co diem TB > %.2f:\n", diem);
    for (int i = 0; i < n; i++) {
        if (tinhDiemTB(sv[i].score) > diem) {
            outputInfoStudent(sv[i]);
        }
    }
}

void inSVTheoThanhPho(struct InfoStudent sv[], int n, char* thanhpho) {
    printf("\nDanh sach sinh vien o thanh pho %s:\n", thanhpho);
    for (int i = 0; i < n; i++) {
        if (strcmp(sv[i].address.thanhpho, thanhpho) == 0) {
            outputInfoStudent(sv[i]);
        }
    }
}

void inSVTuoiLonHon(struct InfoStudent sv[], int n, int tuoi) {
    printf("\nDanh sach sinh vien co tuoi > %d:\n", tuoi);
    for (int i = 0; i < n; i++) {
        if (sv[i].age > tuoi) {
            outputInfoStudent(sv[i]);
        }
    }
}

void inSVDiemCLonHonJavaBeHon(struct InfoStudent sv[], int n, float diemC, float diemJava) {
    printf("\nDanh sach sinh vien co diem C > %.2f va Java < %.2f:\n", diemC, diemJava);
    for (int i = 0; i < n; i++) {
        if (sv[i].score.C > diemC && sv[i].score.Java < diemJava) {
            outputInfoStudent(sv[i]);
        }
    }
}

// Main
int main() {
    struct InfoStudent sv[100];
    int n, choice;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    // Nhập thông tin sinh viên
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        inputInfoStudent(&sv[i]);
    }

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            for (int i = 0; i < n; i++) {
                outputInfoStudent(sv[i]);
            }
            break;
        case 2:
            inSVDiemTBLonHon(sv, n, 5.0);
            inSVDiemTBLonHon(sv, n, 8.0);
            break;
        case 3:
            inSVTheoThanhPho(sv, n, "TP.HCM");
            break;
        case 4:
            inSVTuoiLonHon(sv, n, 18);
            break;
        case 5:
            inSVDiemCLonHonJavaBeHon(sv, n, 8.0, 8.0);
            break;
        case 6:
            printf("Thoat chuong trinh.\n");
            break;
        default:
            printf("Lua chon khong hop le!\n");
        }
    } while (choice != 6);

    return 0;
}
