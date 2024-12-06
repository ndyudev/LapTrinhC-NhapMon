#include <stdio.h>

int main() {
    int choice;
    do {
        printf("\nBan vua nhan mot phan qua, chon 1 trong 3!\n");
        printf(" - Phan qua so 1\n");
        printf(" - Phan qua so 2\n");
        printf(" - Phan qua so 3\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 3) {
            if (choice == 1) {
                printf("Chuc ban may man lan sau!\n");
            } else if (choice == 2) {
                printf("Ban da nhan duoc xuat hoc bong 1000$\n");
            } else if (choice == 3) {
                printf("Ban da nhan duoc xuat hoc bong 500$\n");
            }
        } else {
            printf("Lua chon khong hop le, vui long nhap lai!\n");
        }

    } while (choice < 1 || choice > 3);
    return 0;
}
