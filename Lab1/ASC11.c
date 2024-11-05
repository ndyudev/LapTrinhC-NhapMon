#include <stdio.h>

int main() {
    int i;

    printf("Bảng mã ASCII:\n\n");

    // In các ký tự có mã ASCII từ 0 đến 127
    for (i = 0; i <= 127; i++) {
        printf("%d: %c\n", i, i);
    }

    return 0;
}