#include <stdio.h>

int main() {
    float a, b, x;
    // Nhập giá trị của a và b.
    printf("Nhap vao gia tri cua a: ");
    scanf("%f", &a);
    printf("Nhap vao gia tri cua b: ");
    scanf("%f", &b);
    // Nếu a == 0 phương trình vô nghiệm.
    // Nếu a và b bằng 0 thì phương trình vô số nghiệm.
    if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh co vo so nghiem.\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } else {
        // Tính nghiệm x = -b / a khi a khác 0
        x = -b / a;
        printf("Phuong trinh co nghiem x = %.2f\n", x);
    }
    // Debug
    printf("Ket thuc chuong trinh");
    printf("Ban muon tiep tuc hay khong?");
    return 0;
}
