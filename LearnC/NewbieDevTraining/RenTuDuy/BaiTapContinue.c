#include <stdio.h>

int main(){
    int soNguyen, tong = 0;
    printf("Nhap vao so nguyen (Nhap 0 de ket thuc): ");
    scanf("%d", &soNguyen);
    if (soNguyen == 0)
    {
        printf("Chuong trinh het thuc");
    }
    else
    {
        if (soNguyen > 0)
        {
            while (soNguyen > 0)
            {
                tong += soNguyen;
                printf("So ban nhap la so duong\n");
                printf("Nhap vao so nguyen (Nhap 0 de ket thuc): ");
                scanf("%d", &soNguyen);
            }
        }
        else {
            while (soNguyen < 0)
            {
                printf("So ban nhap la so am: ");
                scanf("%d", &soNguyen);
            } 
        }
    }
    printf("Tong cac so nguyen: %d",tong);
}