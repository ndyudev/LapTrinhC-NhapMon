#include <stdio.h>

// Hàm kiểm tra xem cả hai số có phải là số lẻ hay không
int kiemTraSoLe(int a, int b) {
    return (a % 2 != 0 && b % 2 != 0); // Trả về 1 nếu cả hai số là số lẻ, ngược lại trả về 0
}

// Hàm in các số lẻ trong khoảng từ a đến b
void inSoLeTrongKhoang(int a, int b) {
    printf("Cac so le trong khoang tu %d den %d la:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) { // Kiểm tra nếu là số lẻ
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int a, b;

    // Nhập hai số nguyên a và b
    printf("Nhap vao so nguyen a (a < b): ");
    scanf("%d", &a);
    printf("Nhap vao so nguyen b: ");
    scanf("%d", &b);

    // Kiểm tra điều kiện a < b
    if (a >= b) {
        printf("Loi: Gia tri a phai nho hon b.\n");
        return 1; // Kết thúc chương trình
    }

    // Kiểm tra cả hai số có phải là số lẻ hay không
    if (kiemTraSoLe(a, b)) {
        printf("Ca hai so a va b deu la so le.\n");
    } else {
        printf("Mot trong hai so a hoac b khong phai so le.\n");
    }

    // In các số lẻ trong khoảng từ a đến b
    inSoLeTrongKhoang(a, b);

    return 0;
}
