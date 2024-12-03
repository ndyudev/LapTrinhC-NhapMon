#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // Kiem tra so chia het cho 7
    if (n % 7 == 0)
    {
        printf("So %d chia het cho 7\n",n);
    } else
    {
        printf("So %d khong chia het cho 7\n",n); 
    }
    // Kiem tra so chan le
    if (n % 2 == 0)
    {
        printf("So %d la so chan\n",n);
    }
    else
    {
        printf("So %d khong phai la so chan\n",n);
    }
    // So sanh 2 so
    if (n > 50)
    {
        printf("So %d lon hon 50\n",n);
    } else
    {
        printf("So %d nho hon 50\n",n);
    }
    return 0;
    
    
}