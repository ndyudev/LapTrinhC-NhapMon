#include <stdio.h>
#include <string.h>

int main(){
    char FPT[50];
    int Hhoa=0,hthuong = 0;
    printf("Nhap ky tu:");
    scanf(" %[^\n]",FPT);

    for (int i = 0; i < strlen(FPT); i++) {
        if (FPT[i] == 'h') {
            hthuong++;
        }
        if (FPT[i] == 'H') {
            Hhoa++;
        }
    }
    printf("%s",&FPT);
    printf("So ky tu 'H': %d\n", Hhoa);
    printf("So ky tu 'h': %d\n", hthuong);

    return 0;
}