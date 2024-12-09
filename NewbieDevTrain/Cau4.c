#include <stdio.h>
#include <string.h>

typedef struct {
    float math, physic, english;
} Grade;

typedef struct {
    char id[10];
    char name[50];
    float avgGrade;
    Grade grade;
} Student;

float calculateAverage(Grade g) {
    return (g.math + g.physic + g.english) / 3.0;
}

Student inputStudent() {
    Student s;
    printf("Nhap ID sinh vien: ");
    scanf("%s", s.id);
    printf("Nhap ten sinh vien: ");
    scanf(" %[^\n]", s.name);
    printf("Nhap diem Toan: ");
    scanf("%f", &s.grade.math);
    printf("Nhap diem Ly: ");
    scanf("%f", &s.grade.physic);
    printf("Nhap diem Anh: ");
    scanf("%f", &s.grade.english);
    s.avgGrade = calculateAverage(s.grade);
    return s;
}

float findSecondHighest(Student sv[], int n) {
    float max = -1, secondMax = -1;
    for (int i = 0; i < n; i++) {
        if (sv[i].avgGrade > max) {
            secondMax = max;
            max = sv[i].avgGrade;
        } else if (sv[i].avgGrade > secondMax && sv[i].avgGrade < max) {
            secondMax = sv[i].avgGrade;
        }
    }
    return secondMax;
}

void printSecondHighest(Student sv[], int n, float secondMax) {
    printf("\nDiem TB cao thu hai: %.2f\n", secondMax);
    printf("Danh sach sinh vien co diem TB cao thu hai:\n");
    for (int i = 0; i < n; i++) {
        if (sv[i].avgGrade == secondMax) {
            printf("- %s (ID: %s)\n", sv[i].name, sv[i].id);
        }
    }
}

void printStudentTable(Student sv[], int n) {
    printf("\n\t--- Bang thong tin sinh vien ---\n");
    printf("%-10s %-20s %-10s %-10s %-10s %-10s\n", "ID", "Ten", "Toan", "Ly", "Anh", "Diem TB");
    for (int i = 0; i < n; i++) {
        printf("%-10s %-20s %-10.2f %-10.2f %-10.2f %-10.2f\n", 
               sv[i].id, sv[i].name, sv[i].grade.math, sv[i].grade.physic, sv[i].grade.english, sv[i].avgGrade);
    }
}

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);

    Student sv[n];

    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        sv[i] = inputStudent();
    }

    printStudentTable(sv, n);

    float secondMaxAvg = findSecondHighest(sv, n);
    
    if (secondMaxAvg >= 0) {
        printSecondHighest(sv, n, secondMaxAvg);
    } else {
        printf("Khong co diem TB cao thu hai.\n");
    }

    return 0;
}
