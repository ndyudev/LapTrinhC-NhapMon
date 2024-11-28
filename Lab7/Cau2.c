#include <stdio.h>
#include <string.h>

// Hiển thị menu
void displayMenu() {
    printf("Welcome to MSV Group");
    printf("\nVui long chon chuc nang:");
    printf("\n1. Dang ky");
    printf("\n2. Dang nhap");
    printf("\nLua chon cua ban: ");
}

// Struct lưu thông tin tài khoản
struct Account {
    char user[30];
    char pass[50];
};

// Hàm đăng ký tài khoản
void signUp(struct Account acc[], int *n) {
    char user[30], pass[50];
    printf("Nhap ten tai khoan: ");
    scanf("%s", user);
    printf("Nhap mat khau: ");
    scanf("%s", pass);

    // Kiểm tra tài khoản đã tồn tại
    for (int i = 0; i < *n; i++) {
        if (strcmp(acc[i].user, user) == 0) {
            printf("Tai khoan da ton tai! Vui long dang ky lai.\n");
            return;
        }
    }

    // Tạo tài khoản mới
    strcpy(acc[*n].user, user);
    strcpy(acc[*n].pass, pass);
    (*n)++;
    printf("Tao tai khoan thanh cong! Vui long dang nhap.\n");
}

// Hàm đăng nhập
void logIn(struct Account acc[], int n) {
    char user[30], pass[50];
    printf("Nhap ten tai khoan: ");
    scanf("%s", user);
    printf("Nhap mat khau: ");
    scanf("%s", pass);

    for (int i = 0; i < n; i++) {
        if (strcmp(acc[i].user, user) == 0 && strcmp(acc[i].pass, pass) == 0) {
            printf("Dang nhap thanh cong! Chao mung %s.\n", user);
            return;
        }
    }
    printf("Sai ten tai khoan hoac mat khau! Vui long thu lai.\n");
}

// Hàm chính
int main() {
    int choice;
    struct Account acc[10];
    int n = 0; // Số lượng tài khoản đã đăng ký

    do {
        displayMenu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                signUp(acc, &n);
                break;
            case 2:
                logIn(acc, n);
                break;
            default:
                printf("Lua chon khong hop le. Vui long thu lai.\n");
                break;
        }
    } while (choice == 1 || choice == 2);

    return 0;
}
