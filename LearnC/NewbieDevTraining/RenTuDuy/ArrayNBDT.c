#include<stdio.h>
#define MAX_SIZE 1000

void main() {		
	int arr[MAX_SIZE];
	int sizeOfArray = 0;
	
	printf("Enter size of array: ");
	scanf("%d", &sizeOfArray);
	
	printf("Enter %d elements in the array: \n", sizeOfArray);
	for(int i = 0; i < sizeOfArray; i++) {
		printf("Enter element %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	
	printf("\nElements in array: ");
    for(int i=0; i < sizeOfArray; i++) {
        printf("%d ", arr[i]);
    }
}