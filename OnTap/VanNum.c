#include <stdio.h>

int tinhGocQuay(float giaTriNumVan) {
    if (giaTriNumVan < 0) {
        return -1;
    }

    int gocQuay = (int)((giaTriNumVan / 10) * 360);

    return gocQuay;
}

int main() {
    float giaTriNumVan;

    printf("Nhap gia tri num van (0-10): ");
    scanf("%f", &giaTriNumVan);

    int gocQuay = tinhGocQuay(giaTriNumVan);

    if (gocQuay == -1) {
        printf("Gia tri num van khong hop le.\n");
    } else {
        printf("Goc quay cua dong co servo: %d do\n", gocQuay);
    }

    return 0;
}