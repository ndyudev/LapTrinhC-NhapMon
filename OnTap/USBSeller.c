#include <stdio.h>

struct USBSeller{
    char tenHang[50];
    int dungLuong;
    float donGia;
};
typedef struct USBSeller usb;

void inputUSB(usb USB[], int n){
    for (size_t i = 0; i < n; i++)
    {
        printf("Nhap ten hang USB:");
        scanf(" %[^\n]", USB[i].tenHang);
        printf("Nhap dung luong USB:");
        scanf("%d", &USB[i].dungLuong);
        printf("Nhap don gia USB:");
        scanf("%f", &USB[i].donGia);
    }
    
}

void outputUSB(usb USB[], int n) {
    printf("\n%-20s %-15s %-10s\n", "TEN HANG", "DUNG LUONG", "DON GIA");
    printf("---------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        if (USB[i].donGia <= 20000) {
            printf("%-20s %-15d %-10.2f\n", USB[i].tenHang, USB[i].dungLuong, USB[i].donGia);
        }
    }
}

int main(){
    int n;
    printf("Nhap so luong USB: ");
    scanf("%d", &n);
    usb USB[n];
    inputUSB(USB, n);
    outputUSB(USB, n);
}