#include <stdio.h>

void nhapMang1c(int mang[], int n) {
    int i;
    printf("Nhap %d pha tu mang 1 chieu  :\n",n);
    for (i = 0; i < n; i++) {
        scanf("%d", &mang[i]);
    }
}

void xuatMang1c(int mang[], int n) {
    int i;
    printf("xuat cac phan tu mang: ");
    for (i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap So phan tu mang: ");
    scanf("%d", &n);

    int mang[n];

    nhapMang1c(mang, n);
    xuatMang1c(mang, n);

    return 0;
}