#include <stdio.h>

int main() {
    int number;
    printf("Nhap so muon in bang cuu chuong: ");
    scanf("%d", &number);

    printf("Bang cuu chuong tu 1 den 10 cua so %d la:\n", number);
    for (int i = 1; i <= 10; i++) {
        printf("%d. %d * %d = %d\n", i, number, i, number * i);
    }
    
    return 0;
}
