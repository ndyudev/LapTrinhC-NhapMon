#include <stdio.h>

int chiaCho7 (int n) {
    if (n % 7 == 0)
    {
        printf("So %d chia het cho 7\n",n);
    }else
    {
        printf("So %d khong chia het cho 7\n",n);
    }
}

int chanHayLe(int n){
    if (n % 2 == 0)
    {
        printf("So %d la so chan\n",n);
    } else
    {
        printf("So %d la so le\n",n);
    }
}

void soSanh(int n) {
    if (n > 50)
    {
        printf("So %d lon hon 50\n",n);
    }else
    {
        printf("So %d nho hon 50\n",n);
    }
}


int main() {
    int n = 0;
    printf("Nhap vao so muon kiem tra:");
    scanf("%d",&n);
    chiaCho7(n);
    chanHayLe(n);
    soSanh(n);
}