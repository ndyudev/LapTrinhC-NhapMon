#include <stdio.h>
#include <math.h>

float tinhQuangDuong(int hanhTrinh[], int soPhanTu) {
    float pin = 100;
    float quangDuong = 0;

    for (int i = 0; i < soPhanTu; i++) {
        int giaTri = hanhTrinh[i];

        if (giaTri > 0) { // Lên dốc
            float quangDuongDiDuoc = pin * 2.15;
            if (quangDuongDiDuoc >= giaTri){
                quangDuong += giaTri;
                pin -= giaTri/2.15;
            }
            else{
                quangDuong += quangDuongDiDuoc;
                pin = 0;
                break;
            }
        } else if (giaTri == 0) { // Sạc pin
            pin += 25;
            if (pin > 100) {
                pin = 100;
            }
        } else { // Xuống dốc
            float pinDuocSac = fabs(giaTri) / 10.0;
            pin += pinDuocSac;
            if (pin > 100) {
                pin = 100;
            }
        }
    }

    return quangDuong;
}

int main() {
    int hanhTrinh[100]; // Khai báo mảng đủ lớn
    int soPhanTu = 0;

    printf("Nhap hanh trinh (nhap 0 de ket thuc): ");
    int giaTri;
    while (scanf("%d", &giaTri) == 1 && giaTri != 0) {
        hanhTrinh[soPhanTu++] = giaTri;
    }
    if (giaTri == 0 && soPhanTu == 0){
        printf("Hanh trinh trong!\n");
        return 1;
    }

    float quangDuongDiDuoc = tinhQuangDuong(hanhTrinh, soPhanTu);

    printf("Quang duong di duoc: %.1f km\n", quangDuongDiDuoc);

    return 0;
}