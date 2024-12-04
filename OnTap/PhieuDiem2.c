#include <stdio.h>

struct phieuDiem {
    char name[30];
    float poinMatch;
    float poinPhysical;
    float poinLy;
}; 
typedef struct phieuDiem phieudiem;

void diemCaoNhat(phieudiem student[], int n) {
    int maxIndex = 0;
    float maxAvg = 0;

    for (int i = 0; i < n; i++) {
        float avg = (student[i].poinMatch + student[i].poinPhysical + student[i].poinLy) / 3.0;
        if (avg > maxAvg) {
            maxAvg = avg;
            maxIndex = i;
        }
    }

    printf("\nHoc sinh co diem trung binh cao nhat:\n");
    printf("Ten: %s\n", student[maxIndex].name);
    printf("Diem TB: %.2f\n", maxAvg);
}

void diemTrungBinh(phieudiem student[], int n) {
    printf("\n--- Diem Trung Binh ---\n");
    printf("TEN HOC SINH | DIEM TRUNG BINH \n");

    for (int i = 0; i < n; i++) {
        float diemTrungBinh = (student[i].poinMatch + student[i].poinPhysical + student[i].poinLy) / 3;
        printf("%s | %.2f \n", student[i].name, diemTrungBinh);
    }
}

void nhapPhieuDiem(phieudiem student[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap name hoc sinh thu %d: ", i + 1);
        scanf(" %[^\n]", student[i].name);

        do {
            printf("Nhap diem mon Toan: ");
            scanf("%f", &student[i].poinMatch);
        } while (student[i].poinMatch < 0 || student[i].poinMatch > 10);

        do {
            printf("Nhap diem mon Ly: ");
            scanf("%f", &student[i].poinLy);
        } while (student[i].poinLy < 0 || student[i].poinLy > 10);

        do {
            printf("Nhap diem mon Hoa: ");
            scanf("%f", &student[i].poinPhysical);
        } while (student[i].poinPhysical < 0 || student[i].poinPhysical > 10);
    }
}

void xuatPhieuDiem(phieudiem student[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nTen hoc sinh thu %d: %s\n", i + 1, student[i].name);
        printf("Diem mon Toan: %.2f\n", student[i].poinMatch);
        printf("Diem mon Hoa: %.2f\n", student[i].poinPhysical);
        printf("Diem mon Ly: %.2f\n", student[i].poinLy);
    }
}

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    phieudiem student[n];
    nhapPhieuDiem(student, n);
    xuatPhieuDiem(student, n);
    diemTrungBinh(student, n);
    diemCaoNhat(student, n);

    return 0;
}
