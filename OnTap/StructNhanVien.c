#include <stdio.h>
#include <string.h>

struct nhanVien {
    char nameNhanVien[40];
    int idNhanVien;
    float mucLuong;
};
typedef struct nhanVien NhanVien;

void inputNhanVien(NhanVien nv[], int n) {
    for (int i = 0; i < n; i++) {
        printf("--- Nhap thong tin nhan vien thu %d: \n", i + 1);
        printf("Nhap ten nhan vien: ");
        scanf(" %[^\n]", nv[i].nameNhanVien);
        printf("Nhap ID nhan vien (so): ");
        scanf("%d", &nv[i].idNhanVien);
        printf("Nhap muc luong nhan vien: ");
        scanf("%f", &nv[i].mucLuong);
    }
}

void ouputNhanVien(NhanVien nv[], int n) {
    printf("+-- Thong tin Nhan Vien --+\n");
    for (int i = 0; i < n; i++) {
        printf("Ten Nhan Vien %d: %s\n", i + 1, nv[i].nameNhanVien);
        printf("ID Nhan Vien: %d\n", nv[i].idNhanVien);
        printf("Muc luong: %.2f\n", nv[i].mucLuong);
    }
}

void sapxepNhanVien(NhanVien nv[], int n) {
    NhanVien temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nv[i].idNhanVien > nv[j].idNhanVien) {
                temp = nv[i];
                nv[i] = nv[j];
                nv[j] = temp;
            }
        }
    }
    printf("\nDanh sach nhan vien sau khi sap xep theo ID:\n");
    ouputNhanVien(nv, n);
}

int main() {
    int n;
    printf("Nhap so luong nhan vien: ");
    scanf("%d", &n);
    NhanVien nv[n];

    inputNhanVien(nv, n);
    ouputNhanVien(nv, n);
    sapxepNhanVien(nv, n);
    return 0;
}
