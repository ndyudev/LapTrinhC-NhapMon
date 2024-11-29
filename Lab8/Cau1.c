#include <stdio.h>
#include <string.h>

struct infoStudent {
    char name[50];
    char major[50];
    char studentID[20];
    float averagePoint;
};

void inputStudent(struct infoStudent student[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Ma so sinh vien: ");
        scanf(" %[^\n]", student[i].studentID);
        printf("Ten sinh vien: ");
        scanf(" %[^\n]", student[i].name);
        printf("Nganh hoc: ");
        scanf(" %[^\n]", student[i].major);
        printf("Diem trung binh: ");
        scanf("%f", &student[i].averagePoint);
        getchar();
    }
}

void outputStudent(struct infoStudent student[], int n) {
    printf("\nThong tin cac sinh vien:\n");
    for (int i = 0; i < n; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ma so sinh vien: %s\n", student[i].studentID);
        printf("Ten sinh vien: %s\n", student[i].name);
        printf("Nganh hoc: %s\n", student[i].major);
        printf("Diem trung binh: %.2f\n", student[i].averagePoint);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();

    struct infoStudent student[n];

    inputStudent(student, n);
    outputStudent(student, n);

    return 0;
}
