#include <stdio.h>

int main() {
    int choice;

    printf("Chương trình Menu:\n");
    printf("1. Nhập xuất mảng số nguyên\n");
    printf("2. Xuất nhập danh sách lớp\n");
    printf("Vui lòng chọn một tùy chọn (1 hoặc 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Bạn đã chọn: Nhập xuất mảng số nguyên\n");
            // Thêm mã cho chức năng nhập xuất mảng số nguyên ở đây
            break;
        case 2:
            printf("Bạn đã chọn: Xuất nhập danh sách lớp\n");
            // Thêm mã cho chức năng xuất nhập danh sách lớp ở đây
            break;
        default:
            printf("Tùy chọn không hợp lệ. Vui lòng chọn lại.\n");
    }

    return 0;
}
