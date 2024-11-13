#include <stdio.h>

// Hàm bài 1: Tính trung bình tổng của các số tự nhiên chia hết cho 2
void bai1() {
    int min, max, i;
    float tong = 0, bienDem = 0, trungBinh = 0;

    printf("Nhap vao gia tri min: ");
    scanf("%d", &min);
    printf("Nhap vao gia tri max: ");
    scanf("%d", &max);

    i = min;
    while (i <= max) {
        if (i % 2 == 0) {
            tong += i;
            bienDem++;
        }
        i++;
    }

    if (bienDem != 0) {
        trungBinh = tong / bienDem;
        printf("Trung binh tong cua cac so chia het cho 2 tu %d toi %d la: %.2f\n", min, max, trungBinh);
    } else {
        printf("Khong co so nao chia het cho 2 trong khoang tu %d toi %d.\n", min, max);
    }
}

// Hàm bài 2: Kiểm tra số nguyên tố
void bai2() {
    int x, i, count = 0;

    printf("Nhap vao so x: ");
    scanf("%d", &x);

    if (x < 2) {
        printf("%d khong phai la so nguyen to.\n", x);
        return;
    }

    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            count++;
            break;
        }
    }

    if (count == 0) {
        printf("%d la so nguyen to.\n", x);
    } else {
        printf("%d khong phai la so nguyen to.\n", x);
    }
}

// Hàm bài 3: Kiểm tra số chính phương
void bai3() {
    int x, i;
    int laSoChinhPhuong = 0;

    printf("Nhap vao so x: ");
    scanf("%d", &x);

    for (i = 1; i <= x; i++) {
        if (i * i == x) {
            laSoChinhPhuong = 1;
            break;
        }
    }

    if (laSoChinhPhuong) {
        printf("%d la so chinh phuong.\n", x);
    } else {
        printf("%d khong phai la so chinh phuong.\n", x);
    }
}

// Hàm hiển thị menu với khung
void menu() {
    int choice;

    do {
        printf("++------------------------------------++\n");
        printf("| Chuc nang 1: Tinh trung binh tong    |\n");
        printf("| Chuc nang 2: Tim so nguyen to        |\n");
        printf("| Chuc nang 3: Tim so chinh phuong     |\n");
        printf("| Chuc nang 4: Thoat                   |\n");
        printf("++------------------------------------++\n");
        printf("Xin moi chon chuc nang (1,2,3,4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                bai1();
                break;
            case 2:
                bai2();
                break;
            case 3:
                bai3();
                break;
            case 4:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n");
                break;
        }
    } while (choice != 4);
}

// Hàm main để chạy chương trình
int main() {
    menu();
    return 0;
}
