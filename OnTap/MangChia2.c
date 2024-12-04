#include <stdio.h>

int main() {
    int n;
    printf("Nhap do dai cua mang: ");
    scanf("%d", &n);

    int a[n];
    int le = 0;
    int chan = 0;

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu cho mang tai [%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nCac so chia het cho 2 (so chan):\n");
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
            chan++;
        }
    }

    printf("\n\nCac so khong chia het cho 2 (so le):\n");
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d ", a[i]);
            le++;
        }
    }

    printf("\n\nSo luong so chan: %d\n", chan);
    printf("So luong so le: %d\n", le);

    return 0;
}
