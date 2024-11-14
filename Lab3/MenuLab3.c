#include <stdio.h>
#include <math.h>

int main() {
    int choat;
    float a, b, c, x, delta, x1, x2;
    int kWh;
    float total = 0;
    float diem;
    // Debug Menu Lab 3
    printf("---- MENU LAB 3 ----\n");
    printf("1. GIAI PHUONG TRINH BAT NHAT\n");
    printf("2. GIAI PHUONG TRINH BAT HAI\n");
    printf("3. TINH TIEN DIEN\n");
    printf("4. TINH HOC LUC\n");
    printf("NHAP LUA CHON CUA BAN! : ");
    scanf("%d", &choat);

    switch (choat) {
        case 1:
            // Giải phương trình bậc nhất ax + b = 0
            printf("Nhap vao gia tri cua a: ");
            scanf("%f", &a);
            printf("Nhap vao gia tri cua b: ");
            scanf("%f", &b);
            
            if (a == 0) {
                if (b == 0) {
                    printf("Phuong trinh co vo so nghiem.\n");
                } else {
                    printf("Phuong trinh vo nghiem.\n");
                }
            } else {
                x = -b / a;
                printf("Phuong trinh co nghiem x = %.2f\n", x);
            }
            break;

        case 2:
            // Giải phương trình bậc hai ax^2 + bx + c = 0
            printf("Nhap vao gia tri cua a: ");
            scanf("%f", &a);
            printf("Nhap vao gia tri cua b: ");
            scanf("%f", &b);
            printf("Nhap vao gia tri cua c: ");
            scanf("%f", &c);

            if (a == 0) {
                if (b == 0) {
                    if (c == 0) {
                        printf("Phuong trinh co vo so nghiem.\n");
                    } else {
                        printf("Phuong trinh vo nghiem.\n");
                    }
                } else {
                    x1 = -c / b;
                    printf("Phuong trinh co nghiem x = %.2f\n", x1);
                }
            } else {
                delta = b * b - 4 * a * c;
                if (delta < 0) {
                    printf("Phuong trinh vo nghiem.\n");
                } else if (delta == 0) {
                    x1 = -b / (2 * a);
                    printf("Phuong trinh co nghiem kep x = %.2f\n", x1);
                } else {
                    x1 = (-b + sqrt(delta)) / (2 * a);
                    x2 = (-b - sqrt(delta)) / (2 * a);
                    printf("Phuong trinh co 2 nghiem rieng biet:\n");
                    printf("x1 = %.2f\n", x1);
                    printf("x2 = %.2f\n", x2);
                }
            }
            break;

        case 3:
            // Tính tiền điện
            printf("Nhap vao so kWh tieu thu hang thang: ");
            scanf("%d", &kWh);

            if (kWh <= 50) {
                total = kWh * 1678;
            } else if (kWh <= 100) {
                total = 50 * 1678 + (kWh - 50) * 1734;
            } else if (kWh <= 200) {
                total = 50 * 1678 + 50 * 1734 + (kWh - 100) * 2014;
            } else if (kWh <= 300) {
                total = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kWh - 200) * 2536;
            } else if (kWh <= 400) {
                total = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kWh - 300) * 2834;
            } else {
                total = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kWh - 400) * 2927;
            }

            printf("So tien dien phai dong: %.2f VND\n", total);
            break;

        case 4:
            // Tính học lực
            printf("Nhap vao diem cua ban (0-10): ");
            scanf("%f", &diem);

            if (diem >= 9 && diem <= 10) {
                printf("Hoc sinh xuat sac\n");
            } else if (diem >= 8 && diem < 9) {
                printf("Hoc sinh gioi\n");
            } else if (diem >= 6.5 && diem < 8) {
                printf("Hoc sinh kha\n");
            } else if (diem >= 5 && diem < 6.5) {
                printf("Hoc sinh trung binh\n");
            } else if (diem >= 3.5 && diem < 5) {
                printf("Hoc sinh yeu\n");
            } else if (diem >= 0 && diem < 3.5) {
                printf("Hoc sinh kem\n");
            } else {
                printf("Diem khong hop le. Vui long nhap lai.\n");
            }
            break;

        default:
            printf("+-- CHUONG TRINH KET THUC --+\n");
            break;
    }

    return 0;
}
