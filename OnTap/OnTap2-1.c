#include <stdio.h>

int main(){
    int min, max = 0;
    int temp;
    printf("Nhap gia tri cho MIN va MAX: ");
    scanf("%d%d",&min,&max);
    if (min > max)
    {
        temp = min;
        min = max;
        max = temp;
    }
    printf("Gia tri khi thay doi:\n MAX: %d - MIN: %d\n", max,min);

    printf("Cac so trong khoang %d den %d cho khong chia het cho 3 la: \n", min,max);
    for ( ;min <= max; min++)
    {
        if (min % 3 != 0)
        {
            printf("%d ", min);
        }
    }
}