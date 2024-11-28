#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Khai báo struct
struct Student {
    char ten[50];
    int tuoi;
    float gpa;
};
typedef struct Student student;

// Hàm nhập thông tin sinh viên
student inputInfoSinhVien(student sinhVien) {
    printf("Nhap ten sinh vien: ");
    gets(sinhVien.ten);
    return sinhVien;
}

int main() {
    student sinhVien;
    fflush(stdin);

    sinhVien = inputInfoSinhVien(sinhVien);

    // In ra thông tin
    printf("Ten sinh vien: %s\n", sinhVien.ten);

    return 0;
}
