#include <stdio.h>

int main() {
    int n;
    int i;
    printf("Nhap so phan tu mang 1  chieu: ");
    scanf("%d", &n);

    int mang1c[n];

    printf("nhap  %d pha tu mang 1 chieu :\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d",&mang1c[i]);
    }

    printf("Xuat cac phan tu mang 1 chieu: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang1c[i]);
    }

    return 0;
}