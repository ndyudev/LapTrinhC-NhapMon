#include <stdio.h>
#include <string.h>

// Struct NgaySinh
typedef struct {
    int ngay;
    int thang;
    int nam;
} NgaySinh;

// Struct SinhVien (Student)
typedef struct {
    char ten[50];
    char mssv[20];
    char diaChi[100];
    NgaySinh ngaySinh; // Lồng struct NgaySinh
} Student;

// Hàm nhập thông tin sinh viên
void inputInfoSinhVien(Student* sv) {
    printf("Nhap ten: ");
    getchar(); // Để loại bỏ ký tự xuống dòng còn sót
    fgets(sv->ten, sizeof(sv->ten), stdin);
    sv->ten[strcspn(sv->ten, "\n")] = '\0'; // Xóa ký tự xuống dòng cuối

    printf("Nhap MSSV: ");
    fgets(sv->mssv, sizeof(sv->mssv), stdin);
    sv->mssv[strcspn(sv->mssv, "\n")] = '\0';

    printf("Nhap dia chi: ");
    fgets(sv->diaChi, sizeof(sv->diaChi), stdin);
    sv->diaChi[strcspn(sv->diaChi, "\n")] = '\0';

    printf("Nhap ngay sinh (dd mm yyyy): ");
    scanf("%d %d %d", &sv->ngaySinh.ngay, &sv->ngaySinh.thang, &sv->ngaySinh.nam);
}

// Hàm xuất thông tin sinh viên
void outputInfoSinhVien(Student sv) {
    printf("\nThong tin sinh vien:\n");
    printf("Ten        : %s\n", sv.ten);
    printf("MSSV       : %s\n", sv.mssv);
    printf("Dia chi    : %s\n", sv.diaChi);
    printf("Ngay sinh  : %02d/%02d/%04d\n", sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam);
}

int main() {
    Student sv;

    // Nhập thông tin sinh viên
    inputInfoSinhVien(&sv);

    // Xuất thông tin sinh viên
    outputInfoSinhVien(sv);

    return 0;
}
