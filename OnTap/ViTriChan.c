#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap gia tri cua mang tai [%d]:",i);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i += 2)
    {
        printf("Gia tri chan tai vi tri [%d] la: %d\n", i, arr[i]);
    }
    
}
