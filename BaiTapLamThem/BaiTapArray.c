#include <stdio.h>

void nhapMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void inSoChiaHetCho7(int arr[], int n) {
    printf("\nCac so chia het cho 7 la: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 7 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

void demSoChanLe(int arr[], int n) {
    int soChan = 0, soLe = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            soChan++;
        } else {
            soLe++;
        }
    }
    printf("\nSo luong so chan: %d", soChan);
    printf("\nSo luong so le: %d\n", soLe);
}

int main() {
    int n;
    
    printf("Nhap so luong phan tu n: ");
    scanf("%d", &n);

    int arr[n];

    nhapMang(arr, n);

    inSoChiaHetCho7(arr, n);

    demSoChanLe(arr, n);

    return 0;
}
