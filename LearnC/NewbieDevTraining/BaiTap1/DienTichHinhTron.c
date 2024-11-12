#include <stdio.h>

int main() {
    const float PI = 3.14159;
    float R, S;

    // Nhập bán kính từ bàn phím
    printf("Nhap ban kinh R cua hinh tron: ");
    scanf("%f", &R);

    // Tính diện tích
    S = PI * R * R;

    // In ra kết quả
    printf("Dien tich S cua hinh tron la: %.2f\n", S);

    return 0;
}
