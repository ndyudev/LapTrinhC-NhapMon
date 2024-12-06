#include <stdio.h>
#include <string.h>

int main() {
    char chuoi1[10];
    char chuoi2[10];
    char chuoi[20];

    printf("Nhap chuoi 1 ( khong cach ):");
    scanf("%s",&chuoi1);
    printf("Nhap chuoi 2 ( khong cach ):");
    scanf("%s",&chuoi2);

    strcpy(chuoi,chuoi1);
    strcat(chuoi,chuoi2);
    printf("Chuoi da noi %s", chuoi);
}