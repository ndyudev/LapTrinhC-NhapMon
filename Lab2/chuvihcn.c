#include <stdio.h>

int main() {
    float chieuDai, chieuRong;
    float chuVi, dienTich;

    printf("Nhap chieu dai hinh chu nhat: ");
    scanf("%f", &chieuDai);
    printf("Nhap chieu rong hinh chu nhat: ");
    scanf("%f", &chieuRong);

    chuVi = 2 * (chieuDai + chieuRong);
    dienTich = chieuDai * chieuRong;

    printf("Chu vi hinh chu nhat: %.2f\n", chuVi);
    printf("Dien tich hinh chu nhat: %.2f\n", dienTich);

    return 0;
}
