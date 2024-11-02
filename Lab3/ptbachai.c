#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, x1, x2;

    // Nhập giá trị của a, b và c
    printf("Nhap vao gia tri cua a: ");
    scanf("%f", &a);
    printf("Nhap vao gia tri cua b: ");
    scanf("%f", &b);
    printf("Nhap vao gia tri cua c: ");
    scanf("%f", &c);

    // Kiểm tra nếu a == 0
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            // Phương trình bậc nhất bx + c = 0
            x1 = -c / b;
            printf("Phuong trinh co nghiem x = %.2f\n", x1);
        }
    } else {
        // Phương trình bậc hai: Tính delta
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            printf("Phuong trinh vo nghiem.\n");
        } else if (delta == 0) {
            // Nghiệm kép
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep x = %.2f\n", x1);
        } else {
            // Hai nghiệm phân biệt
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem rieng biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }
    }

    return 0;
}
