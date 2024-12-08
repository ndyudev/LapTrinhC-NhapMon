#include <stdio.h>
#include <string.h>

typedef struct { float toan, ly, anh; } Diem;
typedef struct { char ten[50]; Diem diem; } SinhVien;

float diemTrungBinh(Diem d) { return (d.toan + d.ly + d.anh) / 3.0; }

int main() {
    int n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    SinhVien sv[n];
    float diemMax = 0, diemThucHai = 0, diemTB[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap ten, Toan, Ly, Anh: ");
        scanf("%s %f %f %f", sv[i].ten, &sv[i].diem.toan, &sv[i].diem.ly, &sv[i].diem.anh);
        diemTB[i] = diemTrungBinh(sv[i].diem);
        if (diemTB[i] > diemMax) { diemThucHai = diemMax; diemMax = diemTB[i]; }
        else if (diemTB[i] > diemThucHai && diemTB[i] < diemMax) diemThucHai = diemTB[i];
    }
    printf("Diem trung binh cao thu hai: %.2f\n", diemThucHai);
    for (int i = 0; i < n; i++) 
        if (diemTB[i] == diemThucHai) printf("%s\n", sv[i].ten);
    return 0;
}
