#include <stdio.h>

int demSoChuSoChan(int nums[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        int soChuSo = nums[i] == 0 ? 1 : 0;
        for (int num = nums[i]; num != 0; num /= 10) {
            soChuSo++;
        }
        if (soChuSo % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    int nums[n];
    printf("Nhap cac so nguyen:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("So luong phan tu co so chu so chan: %d\n", demSoChuSoChan(nums, n));
    return 0;
}
