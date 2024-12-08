#include <stdio.h>
int main() {
    int n, dem = 0;
    printf("Nhap kich thuoc mang: ");
    scanf("%d", &n);
    int mang[n], tanSuat[101] = {0};
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &mang[i]);
        tanSuat[mang[i]]++;
    }
    for (int i = 0; i < 101; i++) 
        if (tanSuat[i] > 1) dem++;
    printf("So luong phan tu trung lap: %d\n", dem);
    return 0;
}
