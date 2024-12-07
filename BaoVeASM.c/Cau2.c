#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int arr[n];
    float sum = 0;

    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu [%d]: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float trungBinh = sum / n;

    printf("Trung binh la: %.2f\n", trungBinh);

    return 0;
}
