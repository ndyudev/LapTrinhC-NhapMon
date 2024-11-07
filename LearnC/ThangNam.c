#include <stdio.h>

int thang;

int main()
{
    printf("Thang?:");
    scanf("%d", &thang);

    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 9 || thang == 11)
    {
        printf("31 Ngay");
    }
    else if (thang == 4 || thang == 6 || thang == 8 || thang == 10 || thang == 12)
    {
        printf("30 Ngay");
    } else if (thang == 2 )
    {
        printf("28 ngay");
    } else {
        printf("Thang khong hop le!");
    }
    return 0;
}
