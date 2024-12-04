#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int length;

   
    printf("Nhap chuoi: ");
    scanf(" %[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    length = strlen(str);

    printf("Chuoi in hoa: %s\n", str);
    printf("So ky tu cua chuoi: %d\n", length);

    return 0;
}
