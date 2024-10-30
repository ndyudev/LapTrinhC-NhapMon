#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Nhập 2 số từ người dùng
    printf("Nhap so thu nhat: ");
    scanf("%f", &num1);
    printf("Nhap so thu hai: ");
    scanf("%f", &num2);

    // Xóa ký tự xuống dòng còn sót lại trong bộ đệm
    getchar();  

    // Nhập phép toán
    printf("Chon phep toan (+, -, *, /): ");
    scanf("%c", &operator); 

    // Thực hiện phép toán
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Ket qua: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Ket qua: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Ket qua: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Ket qua: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("Loi: Khong the chia cho 0!\n");
            }
            break;
        default:
            printf("Loi: Phep toan khong hop le!\n");
    }

    return 0;
}
