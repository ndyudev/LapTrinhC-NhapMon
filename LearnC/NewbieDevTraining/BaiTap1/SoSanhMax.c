#include <stdio.h>

int main() {
    int a, b, c, tong;
    const int MAX = 100;

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);
    printf("Nhap so thu ba: ");
    scanf("%d", &c);

    tong = a + b + c;

    printf("Tong cua ba so la: %d\n", tong);
    printf("Ket qua: %s\n", (tong > MAX) ? "Tong lon hon 100" : "Tong nho hon hoac bang 100");

    return 0;
}
