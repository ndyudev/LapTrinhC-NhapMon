#include <stdio.h>
#include <math.h>

int xacDinhTrangThaiPin(float pinConLai) {
    if (pinConLai >= 50.0)
        return 1;
    else if (pinConLai >= 20.0)
        return 2;
    else
        return 3;
}

float pinTieuHaoTheoK(int k, int trangThaiPin) {
    switch (k) {
        case 1:
            return 3.0;
        case 2:
            if (trangThaiPin == 1) return 3.6;
            if (trangThaiPin == 2) return 4.9;
            if (trangThaiPin == 3) return 7.0;
            break;
        case 3:
            if (trangThaiPin == 1) return 8.0;
            if (trangThaiPin == 2) return 10.5;
            if (trangThaiPin == 3) return -1.0;
        case 4:
            if (trangThaiPin == 1) return 4.4;
            if (trangThaiPin == 2) return 5.3;
            if (trangThaiPin == 3) return -1.0;
            break;
        default:
            return -2.0;
    }
    return -2.0;
}

float lamTron(float so) {
    return round(so * 100) / 100.0;
}

int main() {
    float pinConLai;
    int k;

    printf("Nhap phan tram pin con lai: ");
    scanf("%f", &pinConLai);
    printf("Nhap tham so loai duong (1: Cao toc, 2: Dong dan cu, 3: Deo/doc, 4: Duong hon hop): ");
    scanf("%d", &k);

    int trangThaiPin = xacDinhTrangThaiPin(pinConLai);
    if (trangThaiPin == 1) {
        printf("Trang thai pin: Tot\n");
    } else if (trangThaiPin == 2) {
        printf("Trang thai pin: Yeu\n");
    } else {
        printf("Trang thai pin: Can\n");
    }

    float pinTieuHao = pinTieuHaoTheoK(k, trangThaiPin);
    if (pinTieuHao == -1.0) {
        printf("Canh bao: Pin can, khong an toan de di chuyen.\n");
        return 0;
    }
    if (pinTieuHao == -2.0) {
        printf("Loi: Tham so k khong hop le.\n");
        return 0;
    }

    float quangDuong = (pinConLai / pinTieuHao) * 5.0;
    quangDuong = lamTron(quangDuong);
    printf("Xe co the di duoc toi da %.2f km.\n", quangDuong);

    return 0;
}
