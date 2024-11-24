#include <stdio.h>

int main() {
    int choice;

    do {
        // Hiển thị menu
        printf("============================================\n");
        printf("||            HAY CHON MOT PHAN QUA       ||\n");
        printf("============================================\n");
        printf("||    1. Phan qua so 1                    ||\n");
        printf("||    2. Phan qua so 2                    ||\n");
        printf("||    3. Phan qua so 3                    ||\n");
        printf("============================================\n");
        printf("Nhap so phan qua ban muon chon (1-3): ");
        scanf("%d", &choice);

        // Kiểm tra giá trị nhập
        if (choice < 1 || choice > 3) {
            printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    } while (choice < 1 || choice > 3); // Lặp lại nếu lựa chọn không hợp lệ

    // Xử lý các lựa chọn hợp lệ
    switch (choice) {
    case 1:
        printf("Chuc ban may man lan sau!\n");
        break;
    case 2:
        printf("Ban da nhan suat hoc bong tri gia 1000$!\n");
        break;
    case 3:
        printf("Ban da nhan suat hoc bong tri gia 500$!\n");
        break;
    }

    return 0;
}
