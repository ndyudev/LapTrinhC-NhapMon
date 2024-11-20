#include <stdio.h>

// Hàm tìm giá trị lớn nhất trong 3 số
int findMax(int so1, int so2, int so3) {
    int max = so1;
    if (so2 > max) {
        max = so2;
    }
    if (so3 > max) {
        max = so3;
    }
    return max;
}

int main() {
    int so1, so2, so3;
    printf("Nhap so thu nhat: ");
    scanf("%d", &so1);
    printf("Nhap so thu hai: ");
    scanf("%d", &so2);
    printf("Nhap so thu ba: ");
    scanf("%d", &so3);

    int soMax = findMax(so1, so2, so3);
    printf("So lon nhat trong 3 so la: %d\n", soMax);

    return 0;
}
