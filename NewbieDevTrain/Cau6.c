#include <stdio.h>

void sapXepTangDan(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void inMang(int arr[], int n) {
    printf("Mang sau khi sap xep theo thu tu tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    sapXepTangDan(arr, n);

    inMang(arr, n);

    return 0;
}
