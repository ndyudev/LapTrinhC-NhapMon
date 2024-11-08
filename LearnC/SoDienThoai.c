#include <stdio.h>

int main() {
    int maQuocGia, soDienThoai;
    char maDt = '+';

    printf("Nhap ma quoc gia cua ban:\n");
    scanf("%d", &maQuocGia);

    printf("Nhap So Dien Thoai Cua Ban %c%d: ", maDt, maQuocGia);
    scanf("%d", &soDienThoai);

    printf("So dien thoai: %c%d%d\n", maDt, maQuocGia, soDienThoai);

    return 0;
}