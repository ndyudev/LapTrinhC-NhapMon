#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int arr[n];
    float sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu [%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i += 2) {
        sum += arr[i];
        count++;
    }

    float trungBinh = sum / count;

    printf("Trung binh cac phan tu o vi tri chan la: %.2f\n", trungBinh);

    return 0;
}
