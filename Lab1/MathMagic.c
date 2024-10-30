#include <stdio.h>
#include <math.h>  // Thư viện cho lũy thừa và căn bậc hai
#include <stdlib.h> // Thư viện cho exit()

void menu();  // Khai báo hàm menu

int main() {
    float num1, num2, result;
    char op;
    int cont = 1;  // Biến điều khiển vòng lặp

    while (cont) {
        // Hiển thị menu cho người dùng
        menu();

        // Nhập hai số và phép toán
        printf("Nhap so thu nhat: ");
        scanf("%f", &num1);

        printf("Chon phep toan (+, -, *, /, ^, sqrt, %c): ", '%');
        scanf(" %c", &op);  // Khoảng trắng để tránh lỗi nhập

        // Với sqrt, chỉ cần một số
        if (op != 's') {
            printf("Nhap so thu hai: ");
            scanf("%f", &num2);
        }

        // Thực hiện phép toán
        switch (op) {
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
            case '^':
                result = pow(num1, num2);
                printf("Ket qua: %.2f ^ %.2f = %.2f\n", num1, num2, result);
                break;
            case 's':
                if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("Ket qua: sqrt(%.2f) = %.2f\n", num1, result);
                } else {
                    printf("Loi: Khong the tinh can bac hai cua so am!\n");
                }
                break;
            case '%':
                if ((int)num2 != 0) {
                    result = (int)num1 % (int)num2;
                    printf("Ket qua: %d %% %d = %d\n", (int)num1, (int)num2, (int)result);
                } else {
                    printf("Loi: Khong the chia modulo cho 0!\n");
                }
                break;
            default:
                printf("Loi: Phep toan khong hop le!\n");
        }

        // Hỏi người dùng có muốn tiếp tục không
        printf("Ban co muon tiep tuc? (1: Tiep tuc, 0: Thoat): ");
        scanf("%d", &cont);
    }

    printf("Tam biet!\n");
    return 0;
}

// Hàm hiển thị menu
void menu() {
    printf("\n===== MENU MAY TINH NANG CAO =====\n");
    printf("1. + : Phep cong\n");
    printf("2. - : Phep tru\n");
    printf("3. * : Phep nhan\n");
    printf("4. / : Phep chia\n");
    printf("5. ^ : Luy thua (num1 ^ num2)\n");
    printf("6. s : Can bac hai (sqrt(num1))\n");
    printf("7. %% : Modulo (num1 %% num2)\n");
    printf("==================================\n");
}
