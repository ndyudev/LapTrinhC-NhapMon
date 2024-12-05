#include <stdio.h>

int main() {
    int nam = 0;

    do {
        printf("Nhap thang ban muon kiem tra quy (1-12): ");
        scanf("%d", &nam);

        if (nam >= 1 && nam <= 3) {
            printf("Day la quy 1\n");
        } else if (nam >= 4 && nam <= 6) {
            printf("Day la quy 2\n");
        } else if (nam >= 7 && nam <= 9) {
            printf("Day la quy 3\n");
        } else if (nam >= 10 && nam <= 12) {
            printf("Day la quy 4\n");
        } else {
            printf("Thang ban nhap khong hop le, vui long nhap lai!\n");
        }
    } while (nam < 1 || nam > 12);

    return 0;
}
