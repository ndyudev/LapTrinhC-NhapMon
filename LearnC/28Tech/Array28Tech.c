#include <stdio.h>

int main(){
    int n = 10;
    int a[10] = {3, 2, 1, 4, 5, 8, 9, 7, 6, 10};
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    for(int i = n - 1; i >= 0; i--){
        printf("%d ", a[i]);
    }
    return 0;
}
