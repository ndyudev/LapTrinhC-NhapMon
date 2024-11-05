#include <stdio.h>

int main() {
    // In ra kích thước của các kiểu dữ liệu cơ bản trong C
    printf("Kich thuoc cua int: %zu bytes\n", sizeof(int));
    printf("Kich thuoc cua float: %zu bytes\n", sizeof(float));
    printf("Kich thuoc cua double: %zu bytes\n", sizeof(double));
    printf("Kich thuoc cua char: %zu bytes\n", sizeof(char));
    printf("Kich thuoc cua short: %zu bytes\n", sizeof(short));
    printf("Kich thuoc cua long: %zu bytes\n", sizeof(long));
    printf("Kich thuoc cua long long: %zu bytes\n", sizeof(long long));
    printf("Kich thuoc cua long double: %zu bytes\n", sizeof(long double));

    return 0;
}
