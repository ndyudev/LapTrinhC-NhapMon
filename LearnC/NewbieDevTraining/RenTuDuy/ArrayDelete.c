#include <stdio.h>

int main() {
    int sizeofArray; 
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &sizeofArray);

    int arr[sizeofArray];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < sizeofArray; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int bienDem = 0; 

    for (int i = 0; i < sizeofArray; i++) {
        int nums = arr[i];
        int doDai = 0;

        if (nums == 0) {
            doDai = 1; 
        } else {
            while (nums != 0) {
                nums /= 10;
                doDai++;
            }
        }

        if (doDai % 2 == 0) {
            bienDem++;
        }
    }

    printf("So luong cac so co do dai chan: %d\n", bienDem);
    return 0;
}
