<<<<<<< HEAD
#include <stdio.h>

int ctBacHai(int x) {
    printf("Nhap vao gia tri cua x: ");
    scanf("%d",&x);
    if (x % 2 == 0)
    {   
        printf("So %d la so chan",x);
        return 1;
    } else
    {
        printf("So %d khong phai la so chan",x);
        return 0;
    }
    
    
}

int main () {
    int x;
    ctBacHai(x);
    return 0;
=======
#include<stdio.h>


void tinhTong2(int a, int b) {
    int tong;
    tong = a + b;
    printf("Tong hai so la %d", tong);
}

int main(){
    int x=6,y=7;
   
    tinhTong2(x,y);
    
>>>>>>> LearHam
}