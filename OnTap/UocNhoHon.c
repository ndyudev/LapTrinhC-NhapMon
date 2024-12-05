#include <stdio.h>

int main(){
    int soNguyen = 0;
    printf("Nhap vao so nguyen muon tim uoc:");
    scanf("%d",&soNguyen);
    printf("Uoc cua so %d va nho hon %d:\n ",soNguyen,soNguyen);
    for (int i = 1; i < soNguyen; i++)
    { 
        if (soNguyen % i == 0)
        {
            printf(" %d",i);
        }
        
    }
    return 0;
}