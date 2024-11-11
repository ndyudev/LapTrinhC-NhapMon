#include <stdio.h>

int a,b;

int main()
{   
    printf("LUU Y !! GIA TRI CUA A PHAI NHO HON B\n");
    printf("Nhap vao gia tri cua a:");
    scanf("%d",&a);
    printf("Nhap vao gia tri cua b:");
    scanf("%d",&b);
    // Kiem tra a co lon hon b hay khong
    if (a < b)
    {
        // for (size_t i = 0; i <; i++)
        // {
        //     /* code */
        // }
        printf("a nho hon b");
        if (a % 2 == 0 && a % 2 == 0)
    {
        printf("A va B deu la so chan");
        for (int i = a; i < b; i +=2)
        {
            printf("%d\n",i);
        }
        
    }
        
    }
    else
    {
        printf("A khong lon hon B");
        return 1;
    }
    return 0;
}
