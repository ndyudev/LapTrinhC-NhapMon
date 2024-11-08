#include <stdio.h>

int main() {
    int x;
    long long result;  // Sử dụng long long để xử lý các giá trị lớn của x

    printf("Nhap gia tri cua x: ");
    scanf("%d", &x);

    result = (long long)x * x * x + 3 * (long long)x * x + x + 1;

    printf("Gia tri bieu thuc A(x): %lld\n", result);

    return 0;
}
