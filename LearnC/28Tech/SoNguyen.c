#include <stdio.h>

int a;

int main()
{
    printf("Nhap vao gia tri cua a:");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("A la so chan");
    }
    else
    {
        printf("A la so le");
    }
    
    return 0;
}
