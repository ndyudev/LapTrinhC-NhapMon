#include <stdio.h>
#include <string.h>

struct SinhVien{
    char hoten[50];
    char email[50];
    char lop[30];
    double gpa;
    cha
};
//Thay struct SinhVien = SinhVien
typedef struct SinhVien SinhVien;

int main(){
    SinhVien s; // struct SinhVien cung duoc
    strcpy(s.hoten, "Chauu Nhay Duyy");
    strcpy(s.email, "ndyudev@gmail.com");
    strcpy(s.lop, "CNTT");
    s.gpa = 3.6;
    printf("Thong tin sinh vien : \n");
    printf("Ho ten : %s\n", s.hoten);
    printf("Email : %s\n", s.email);
    printf("Lop : %s\n", s.lop);
    printf("Diem gpa : %.2lf\n", s.gpa);
    return 0;

    // SinhVien sv1;
    // printf("Nhap ten sinh vien:");
    // fgets(sv1.hoten, 10, stdin);
    // printf("Nhap lop sinh vien");
    // fgets(sv1.lop, 30, stdin);
    // printf("Nhap email sinh vien");
    // fgets(sv1.email, 50, stdin);

    // printf("Ten sinh vien: %s\n", sv1.hoten);
    // printf("Lop sinh vien: %s\n", sv1.lop);
    // printf("Email sinh vien: %s\n",sv1.email);
}
