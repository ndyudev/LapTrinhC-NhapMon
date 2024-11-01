#include <stdio.h>

int main() {
    int a, b;
    int tong, hieu;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    tong = a + b;
    hieu = a - b;

    printf("Tong hai so: %d\n", tong);
    printf("Hieu hai so: %d\n", hieu);

    return 0;
}
