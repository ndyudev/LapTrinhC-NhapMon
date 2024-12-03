#include <stdio.h>

void processArray(int arr[], int n) {
    int nho = arr[0];
    int chan = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < nho) {
            nho = arr[i];
        }

        if (arr[i] % 2 == 0) {
            chan++;
        }
    }

    printf("Gia tri nho nhat trong mang: %d\n", nho);
    printf("So luong gia tri chan trong mang: %d\n", chan);
}

int main() {
    int n;

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    processArray(arr, n);

    return 0;
}
