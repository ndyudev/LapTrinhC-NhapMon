#include <stdio.h>

int main() {
    float a, b, c;

    printf("Nhap vao so thu a: \n");
    scanf("%f", &a);
    printf("Nhap vao so thu b: \n");
    scanf("%f", &b);
    printf("Nhap vao so thu c: \n");
    scanf("%f", &c);

    // Convert floating-point numbers to integers for modulo operation
    int a_int = (int)a;
    int b_int = (int)b;

    if ((a_int % 2) == 0 && (b_int % 2) == 0) {
        printf("So a va b la so chan\n");
    } else {
        printf("So a va b la so le\n");
    }

    return 0;
}