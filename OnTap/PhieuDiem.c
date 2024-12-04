#include <stdio.h>

struct phieuDiem {
    char name[30];
    float poinMatch;
    float poinPhysical;
    float poinLy;
}; typedef struct phieuDiem phieudiem;

void nhapPhieuDiem(phieudiem student[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("Nhap name hoc sinh thu %d:",i + 1);
        scanf(" %[^\n]",&student[i].name);
        printf("Nhap diem mon Toan: ");
        scanf("%f",&student[i].poinMatch);
        printf("Nhap diem mon Hoa: ");
        scanf("%f",&student[i].poinPhysical);
        printf("Nhap diem mon Ly: ");
        scanf("%f",&student[i].poinLy);
    }
    
}

void xuatPhieuDiem(phieudiem student[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Ten hoc sinh thu %d: %s\n", i + 1,student[i].name);
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
}