#include <stdio.h>

int main() {
    int n = 12345;
    int dem = 0;

    while (n != 0)
    {
        ++dem;
        n /= 10;
    }
    printf("So Luong chu so cua n : %d\n", dem);
    
    return 0;

}
