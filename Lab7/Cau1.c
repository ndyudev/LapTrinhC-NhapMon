#include <stdio.h>

int main() {
    char s[100];
    printf("Xin moi nhap vao chuoi: ");
    gets(s); //

    int i = 0; 
    int n = 0; 
    int p = 0; 
    while (s[i] != '\0') {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            char ch = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] + 32 : s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                n++; 
            } else {
                p++; 
            }
        }
        i++;
    }
    printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.\n", s, n, p);
    return 0;
}