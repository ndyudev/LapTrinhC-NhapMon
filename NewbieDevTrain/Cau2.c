#include <stdio.h>

int main() {
    int so, soDaoNguoc = 0;
    printf("Nhap so: ");
    scanf("%d", &so);

    while (so) {
        int chuSoCuoi = so % 10;
        soDaoNguoc = soDaoNguoc * 10 + chuSoCuoi;
        so = so / 10;
    }

    printf("So dao nguoc: %d\n", soDaoNguoc);
    return 0;
}
