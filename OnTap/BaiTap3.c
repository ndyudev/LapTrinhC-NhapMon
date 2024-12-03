#include <stdio.h>

struct infoStudent{
    char name[50];
    char studentID[10];
    float poin;
    char ketqua[10];
};

void inputInfoStudent(struct infoStudent student[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nhap ten sinh vien %d: ", i+1);
        scanf(" %[^\n]", student[n].name);
        printf("Nhap mssv sinh vien: ");
        scanf(" %[^\n]", student[n].studentID);
        printf("Nhap diem sinh vien: ");
        scanf(" %f.2", &student[n].poin);
        if (student[n].poin > 5)
        {
            printf("Ket qua: Dat");
        } else {
            printf("Ket qua: rot");
        }
    }
}

void outputInfoStudent(struct infoStudent student[], int n){
    for (int i = 0 ; i < n; i++)
    {
        printf("Ten sinh vien: %s\n", &student[n].name);
        printf("Diem sinh vien: %f\n", &student[n].studentID);
        printf("Ma so sinh vien: %s\n", &student[n].poin);
        printf("Ket qua sinh vien: %s\n", &student[n].ketqua);
    }
}
int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d",&n);
    struct infoStudent student[n];
    inputInfoStudent(student,n);
    outputInfoStudent(student,n);
}