#include <stdio.h>

void nhapXuatMangSoNguyen() {
    printf("Ban da chon chuc nang: Nhap xuat mang so nguyen\n");
    // Thực hiện xử lý cho bài này nếu cần
}

void nhapXuatMotMayTinh() {
    printf("Ban da chon chuc nang: Nhap xuat 1 may tinh\n");
    // Thực hiện xử lý cho bài này nếu cần
}

void nhapXuatCapNhatCacMayTinh() {
    printf("Ban da chon chuc nang: Nhap xuat va cap nhat cac may tinh\n");
    // Thực hiện xử lý cho bài này nếu cần
}

int main() {
    int luaChon;

    while (1) { // Vòng lặp để hiển thị menu liên tục
        // Hiển thị menu
        printf("\n==== Menu ====\n");
        printf("1. Nhap xuat mang so nguyen\n");
        printf("2. Nhap xuat 1 may tinh\n");
        printf("3. Nhap xuat va cap nhat cac may tinh\n");
        printf("4. Thoat\n");
        printf("================\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);

        // Xử lý theo lựa chọn
        switch (luaChon) {
            case 1:
                nhapXuatMangSoNguyen();
                break;
            case 2:
                nhapXuatMotMayTinh();
                break;
            case 3:
                nhapXuatCapNhatCacMayTinh();
                break;
            case 4:
                printf("Thoat chuong trinh. Tam biet!\n");
                return 0; // Thoát chương trình
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    }
}
