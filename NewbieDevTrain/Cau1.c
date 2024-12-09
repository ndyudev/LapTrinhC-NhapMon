#include <stdio.h>

int main() {
    int so;
    printf("Nhap so muon in bang cuu chuong: ");
    scanf("%d", &so);

    printf("Bang cuu chuong tu 1 den 10 cua so %d la:\n", so);
    for (int i = 1; i <= 10; i++) {
        printf("%d. %d * %d = %d\n", i, so, i, so * i);
    }
    
    return 0;
}
