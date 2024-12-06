#include <stdio.h>

struct Product {
    int productID;
    char productName[50];
    float price;
};
typedef struct Product product;

void inputProduct(product sp[], int sanpham) {
    printf("-- NHAP SAN PHAM --\n");
    for (int i = 0; i < sanpham; i++) {
        printf("Nhap id san pham thu %d: ", i + 1);
        scanf("%d", &sp[i].productID);
        printf("Nhap ten san pham: ");
        scanf(" %[^\n]", sp[i].productName);
        printf("Nhap gia san pham: ");
        scanf("%f", &sp[i].price);
    }
}

void ouputProduct(product sp[], int sanpham) {
    printf("\n\t-- DANH SACH SAN PHAM DA TANG GIA 10%% --\n");
    printf("ID\tTen San Pham\t\tGia Goc\t\tGia Sau Khi Tang\n");
    for (int i = 0; i < sanpham; i++) {
        float priceDaTang = sp[i].price * 1.1;
        printf("%d\t%-20s\t%.2f\t\t%.2f\n", sp[i].productID, sp[i].productName, sp[i].price, priceDaTang);
    }
}

int main() {
    int sanpham;
    printf("So luong san pham muon nhap: ");
    scanf("%d", &sanpham);

    product sp[sanpham];
    inputProduct(sp, sanpham);
    ouputProduct(sp, sanpham);

    return 0;
}
