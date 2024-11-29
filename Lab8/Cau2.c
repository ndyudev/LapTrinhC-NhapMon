#include <stdio.h>

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

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    struct infoStudent student[n];

    inputStudent(student, n);

    sortPoin(student, n);

    outputStudent(student, n);

    return 0;
}