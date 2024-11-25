#include <stdio.h>

// hàm sắp xếp nổi bọt (bubble sort)
void BubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void PrintArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Phan tu mang [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    BubbleSort(arr, n);
    PrintArray(arr, n);
    return 0;
}