#include <stdio.h>

struct NhanVien{
    char name[50];
    char idNhanVien[10];
    char chucvu[10];
    float mucluong;
};

void inputNhanVien(struct NhanVien nhanvien[], int n){
    
    for (int i = 0; i < n; i++)
    {
        printf("Nhap ten nhan vien thu %d: ",i + 1);
        scanf(" %[^\n]",&nhanvien[i].name);
        printf("Nhap id nhan vien: ");
        scanf(" %[^\n]",&nhanvien[i].idNhanVien);
        printf("Nhap chuc vu: ");
        scanf(" %[^\n]",&nhanvien[i].chucvu);
        printf("Nhap muc luong: ");
        scanf("%f",&nhanvien[i].mucluong);
    }
}

void outputNhanVien(struct NhanVien nhanvien[], int n){
    printf("-- Thong Tin Nhan Vien ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("Ten nhan vien thu %d: %s\n",i + 1,nhanvien[i].name);
        printf("Id nhan vien: %s\n",nhanvien[i].idNhanVien);
        printf("Chuc vu: %s\n",nhanvien[i].chucvu);
        printf("Muc luong: %.2f\n",nhanvien[i].mucluong);
    }
    
}

void nhanVienLuongCaoNhat(struct NhanVien nhanvien[], int n){
    float luongcaonhat = nhanvien[0].mucluong;
    for (int i = 0; i < n; i++)
    {
        if (luongcaonhat < nhanvien[i].mucluong)
        {
            luongcaonhat = nhanvien[i].mucluong;
        }
        
    }
    printf("Luong cao nhat cong ty: %.2f\n", luongcaonhat);
}

void chiPhiNhanVien(struct NhanVien nhanvien[], int n){
    float chiphi = 0;
    for (int i = 0; i < n; i++)
    {
        chiphi =+ nhanvien[i].mucluong;
    }
    printf("Muc luong cua nhan vien: %.2f\n", chiphi);
    
}

int main(){
    int n;
    printf("Nhap so luong nhan vien: ");
    scanf("%d", &n);
    struct NhanVien nhanvien[n];
    inputNhanVien(nhanvien,n);
    outputNhanVien(nhanvien,n);
    nhanVienLuongCaoNhat(nhanvien,n);
    chiPhiNhanVien(nhanvien, n);
}