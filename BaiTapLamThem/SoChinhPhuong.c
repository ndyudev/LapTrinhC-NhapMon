#include <stdio.h>
#include <math.h>


int isPerfectSquare(int num) {
    int sqrtNum = (int)sqrt(num);
    return (sqrtNum * sqrtNum == num);
}


void printPerfectSquares(int n) {
    printf("Cac so chinh phuong trong khoang tu 0 den %d la:\n", n);
    for (int i = 0; i <= n; i++) {
        if (isPerfectSquare(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap vao so nguyen duong n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Vui long nhap so nguyen duong!\n");
        return 1;
    }

    printPerfectSquares(n);

    return 0;
}
