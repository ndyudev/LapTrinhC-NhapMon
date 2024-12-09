#include <stdio.h>
int main() {
    int n, dem = 0;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    int mang[n], tanSuat[100] = {0};
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu [%d]: ", i + 1);
        scanf("%d", &mang[i]);
        tanSuat[mang[i]]++;
    }
    for (int i = 0; i < 100; i++) 
        if (tanSuat[i] > 1) dem++;
    printf("So luong phan tu trung lap: %d\n", dem);
    return 0;
}
