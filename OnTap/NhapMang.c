#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        printf("Gia tri cua mang tai [%d]:",i);
        scanf("%d",&arr[i]);
    }

    int tong = 0;
    float trungbinh = 0;
    for (int i = 0; i < n; i++)
    {
        tong += arr[i];
    }
    trungbinh = tong / n;
    printf("Tong cua mang : %d\n",tong);
    printf("Trung binh cua mang : %.2f\n",trungbinh);
    
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Gia tri lon nhat trong mang: %d\n", max);
    printf("Gia tri nho nhat trong mang: %d", min);
    
}