#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Định nghĩa cấu trúc sinh viên
typedef struct {
    char name[50];
    int yearOfBirth;
} Student;

// Hàm nhập thông tin sinh viên
void nhapSinhVien(Student* students, int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);

        printf("Ho va ten: ");
        getchar(); // Xóa ký tự xuống dòng còn lại trong bộ đệm
        fgets(students[i].name, sizeof(students[i].name), stdin);

        // Xóa ký tự xuống dòng cuối chuỗi (nếu có)
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len - 1] == '\n') {
            students[i].name[len - 1] = '\0';
        }

        printf("Nam sinh: ");
        scanf("%d", &students[i].yearOfBirth);
    }
}


void xuatSinhVien(Student* students, int n) {
    printf("\n===============================================\n");
    printf("| %-5s | %-30s | %-10s |\n", "STT", "Ho va Ten", "Nam Sinh");
    printf("===============================================\n");

    for (int i = 0; i < n; i++) {
        printf("| %-5d | %-30s | %-10d |\n", i + 1, students[i].name, students[i].yearOfBirth);
    }
    printf("===============================================\n");
}

int main() {
    int n;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    // Cấp phát bộ nhớ cho danh sách sinh viên
    Student* students = (Student*)malloc(n * sizeof(Student));
    if (students == NULL) {
        printf("Khong du bo nho de cap phat!\n");
        return 1;
    }

    // Nhập và xuất thông tin sinh viên
    nhapSinhVien(students, n);
    xuatSinhVien(students, n);

    // Giải phóng bộ nhớ đã cấp phát
    free(students);

    return 0;
}
