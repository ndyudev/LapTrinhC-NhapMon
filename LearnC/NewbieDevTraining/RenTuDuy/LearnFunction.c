#include <stdio.h>

// Hàm testFunction nhận các con trỏ để trả về kết quả cho từng phép tính
void testFunction(float a, float b, float *tong, float *hieu, float *nhan, float *chia) {
    *tong = a + b;
    *hieu = a - b;
    *nhan = a * b;
    if (b != 0) {
        *chia = a / b;
    } else {
        printf("Loi: Khong the chia cho 0.\n");
    }
}

int main() {
    float tong, hieu, nhan, chia;
    float a, b;

    // Nhập vào giá trị của a và b
    printf("Nhap vao gia tri cua a,b: ");
    scanf("%f %f", &a, &b);

    // Gọi hàm testFunction
    testFunction(a, b, &tong, &hieu, &nhan, &chia);

    // In kết quả
    printf("Tong: %.2f\n", tong);
    printf("Hieu: %.2f\n", hieu);
    printf("Nhan: %.2f\n", nhan);
    if (b != 0) {
        printf("Chia: %.2f\n", chia);
    }

    return 0;
}
