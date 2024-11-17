#include <stdio.h>

void displayMenu() {
    printf("============================================\n");
    printf("||            CHUONG TRINH TONG HOP       ||\n");
    printf("============================================\n");
    printf("||    1. Kiem tra so nguyen               ||\n");
    printf("||    2. Tim uoc so chung, boi so chung   ||\n");
    printf("||    3. Tinh tien Karaoke                ||\n");
    printf("||    4. Tinh tien dien                   ||\n");
    printf("||    5. Chuc nang doi tien               ||\n");
    printf("||    6. Tinh lai suat vay ngan hang      ||\n");
    printf("||    7. Vay tien mua xe                  ||\n");
    printf("||    8. Sap xep thong tin sinh vien      ||\n");
    printf("||    9. Game FPOLY-LOTT                 ||\n");
    printf("||   10. Tinh toan phan so                ||\n");
    printf("||   11. Thoat chuong trinh               ||\n");
    printf("============================================\n");
    printf("Nhap lua chon cua ban: ");
}

int main() {
    int choice;
    do {

        displayMenu();

        scanf("%d", &choice);


        switch (choice) {
            case 1:
                printf("Ban da chon chuc nang: Kiem tra so nguyen\n");

                break;
            case 2:
                printf("Ban da chon chuc nang: Tim uoc so chung va boi so chung\n");

                break;
            case 3:
                printf("Ban da chon chuc nang: Tinh tien Karaoke\n");

                break;
            case 4:
                printf("Ban da chon chuc nang: Tinh tien dien\n");

                break;
            case 5:
                printf("Ban da chon chuc nang: Doi tien\n");

                break;
            case 6:
                printf("Ban da chon chuc nang: Tinh lai suat vay ngan hang\n");
 
                break;
            case 7:
                printf("Ban da chon chuc nang: Vay tien mua xe\n");

                break;
            case 8:
                printf("Ban da chon chuc nang: Sap xep thong tin sinh vien\n");

                break;
            case 9:
                printf("Ban da chon chuc nang: Game FPOLY-LOTT\n");

                break;
            case 10:
                printf("Ban da chon chuc nang: Tinh toan phan so\n");

                break;
            case 11:
                printf("Thoat chuong trinh. Hen gap lai!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
                break;
        }
        printf("\n");
    } while (choice != 11);

    return 0;
}
