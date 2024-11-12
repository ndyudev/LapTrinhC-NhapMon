#include <stdio.h>

int main() {
    const float PI = 3.14159;
    float R, S;

    printf("Nhap ban kinh R cua hinh tron: ");
    scanf("%f", &R);
    // Dien tich hinh tron = PI * R binh.
    S = PI * R * R;

    printf("Dien tich S cua hinh tron la: %.2f\n", S);

    return 0;
}
