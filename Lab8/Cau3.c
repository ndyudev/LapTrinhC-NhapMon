#include <string.h>
#include <stdio.h>
// BÀI 3: TÌM KIẾM SINH VIÊN 
//Hướng dẫn: Sau khi đã nhập thông tin sinh viên vào mảng. Tìm kiếm sinh viên 
// theo mã sinh viên
struct infoStudent {
    char name[50];
    char major[50];
    float averagePoin;
    char studentID[50];
};

void inputStudent(struct infoStudent student[], int n) {
    for (int i = 0; i < n; i++) {
        printf("-- Thong tin sinh vien thu %d -- \n", i + 1);
        printf("Nhap ten sinh vien: ");
        scanf(" %[^\n]", student[i].name);
        printf("Nganh hoc: ");
        scanf(" %[^\n]", student[i].major);
        printf("Diem trung binh: ");
        scanf("%f", &student[i].averagePoin);
        printf("Ma so sinh vien: ");
        scanf(" %[^\n]", student[i].studentID);
    }
}

void outputStudent(struct infoStudent student[], int n) {
    for (int i = 0; i < n; i++) {
        printf("-- Thong Tin Sinh Vien %d --\n", i + 1);
        printf("Ten sinh vien: %s\n", student[i].name);
        printf("Nganh hoc: %s\n", student[i].major);
        printf("Diem trung binh: %.2f\n", student[i].averagePoin);
        printf("Ma so sinh vien: %s\n", student[i].studentID);
    }
}

void sortPoin(struct infoStudent student[], int n) {
    printf("\nDanh sach sinh vien sau khi sap xep theo diem( Tang Dan ):\n");
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (student[i].averagePoin > student[j].averagePoin) {
                struct infoStudent svTemp = student[i];
                student[i] = student[j];
                student[j] = svTemp;
            }
        }
    }
}

void searchInfoStudent(struct infoStudent student[], int n) {
    char studentID[50];
    int found = 0;
    printf("\nNhap ma so sinh vien can tim: ");
    scanf(" %[^\n]", studentID);

    for (int i = 0; i < n; i++) {
        if (strcmp(studentID, student[i].studentID) == 0) {
            printf("\n-- Thong tin sinh vien --\n");
            printf("Ten sinh vien: %s\n", student[i].name);
            printf("Nganh hoc: %s\n", student[i].major);
            printf("Điem trunng binh: %.2f\n", student[i].averagePoin);
            printf("Ma so sinh vien: %s\n", student[i].studentID);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nKhông tìm thấy sinh viên có mã số: %s\n", studentID);
    }
}

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    struct infoStudent student[n];

    inputStudent(student, n);

    sortPoin(student, n);

    outputStudent(student, n);

    searchInfoStudent(student, n);

    return 0;
}