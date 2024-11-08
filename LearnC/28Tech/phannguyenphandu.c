#include <stdio.h>

int main()
{
    int a,b,phannguyen,phandu;
    printf("Nhap Gia Tri So A:\n");
    scanf("%d", &a);
    printf("Nhap Gia Tri So B:\n");
    scanf("%d", &b);

    phannguyen = a % b;
    phandu = a / b;

    printf("Gia Tri So Nguyen va Du:%d %d", phannguyen , phandu);

    return 0;
}
