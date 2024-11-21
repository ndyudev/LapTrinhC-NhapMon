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
}