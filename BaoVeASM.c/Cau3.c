#include <stdio.h>

struct ThuVien {
    int maSach;
    char tenSach[100];
    int soLuong;
    int sachDaBan;
};
typedef struct ThuVien thuvien;

void sapXepSach(thuvien thuVien[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int tonKhoI = thuVien[i].soLuong - thuVien[i].sachDaBan;
            int tonKhoJ = thuVien[j].soLuong - thuVien[j].sachDaBan;
            if (tonKhoI > tonKhoJ) {
                thuvien temp = thuVien[i];
                thuVien[i] = thuVien[j];
                thuVien[j] = temp;
            }
        }
    }
}

void inputSach(thuvien thuVien[], int n) {
    printf("\t--- NHAP THONG TIN SACH ---\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap ma cuon sach thu %d: ", i + 1);
        scanf("%d", &thuVien[i].maSach);

        printf("Nhap ten cuon sach: ");
        scanf(" %[^\n]", thuVien[i].tenSach);

        printf("Nhap so luong sach: ");
        scanf("%d", &thuVien[i].soLuong);

        printf("Nhap so luong da ban: ");
        scanf("%d", &thuVien[i].sachDaBan);
    }
}

void outputSach(thuvien thuVien[], int n) {
    printf("--- THONG TIN SACH ---\n");
    printf("MA SO SACH \t TEN SACH \t\t SO LUONG \t SO LUONG DA BAN \n");
    for (int i = 0; i < n; i++) {
        printf("%-10d \t %-20s \t %-10d \t %-10d \n",
               thuVien[i].maSach,
               thuVien[i].tenSach,
               thuVien[i].soLuong,
               thuVien[i].sachDaBan);
    }
}

int main() {
    int n;
    printf("Nhap so luong sach: ");
    scanf("%d", &n);
    
    thuvien thuVien[n];
    inputSach(thuVien, n);

    printf("\nDANH SACH BAN DA NHAP:\n");
    outputSach(thuVien, n);

    sapXepSach(thuVien, n);

    printf("\nDANH SACH SAU SAP XEP THEO TON KHO TANG DAN:\n");
    outputSach(thuVien, n);
    
    return 0;
}
