#include <stdio.h>
#include <string.h>

struct infoStudent {
    char name[50];
    char studentID[10];
    float poin;
    char ketqua[10];
};


void sinhVienDau(struct infoStudent student[], int n) {
    printf("\n--- Thong Tin Sinh Vien Dat ---\n");
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(student[i].ketqua, "Dat") == 0) {
            printf("\nThong tin sinh vien Dat thu %d:\n", ++count);
            printf("Ten sinh vien: %s\n", student[i].name);
            printf("MSSV: %s\n", student[i].studentID);
            printf("Diem sinh vien: %.2f\n", student[i].poin);
            printf("Ket qua: %s\n", student[i].ketqua);
        }
    }
    if (count == 0) {
        printf("Khong co sinh vien nao dat.\n");
    }
}

void inputInfoStudent(struct infoStudent student[], int n) {
    int tongDau = 0;
    for (int i = 0; i < n; i++) {
        printf("Nhap ten sinh vien %d: ", i + 1);
        scanf(" %[^\n]", student[i].name);

        printf("Nhap MSSV sinh vien: ");
        scanf(" %[^\n]", student[i].studentID);

        printf("Nhap diem sinh vien: ");
        scanf("%f", &student[i].poin);

        if (student[i].poin >= 5) {
            sprintf(student[i].ketqua, "Dat");
            tongDau++;
        } else {
            sprintf(student[i].ketqua, "Rot");
        }
    }
    printf("\nTong so sinh vien Dat: %d\n", tongDau);
}

void outputInfoStudent(struct infoStudent student[], int n) {
    printf("\n--- Thong Tin Tat Ca Sinh Vien ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nThong tin sinh vien thu %d:\n", i + 1);
        printf("Ten sinh vien: %s\n", student[i].name);
        printf("MSSV: %s\n", student[i].studentID);
        printf("Diem sinh vien: %.2f\n", student[i].poin);
        printf("Ket qua: %s\n", student[i].ketqua);
    }
}

int main() {
    int n;

    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    struct infoStudent student[n];

    inputInfoStudent(student, n);
    outputInfoStudent(student, n);
    sinhVienDau(student, n);

    return 0;
}
