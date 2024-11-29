#include <stdio.h>
#include <string.h>

int main() {
    char s[5][20];  
    char temp[20]; 
    int i, j;

    printf("Nhap 5 chuoi bat ky:\n");
    for (i = 0; i < 5; i++) {
        printf("Chuoi thu %d: ", i + 1);
        fgets(s[i], 20, stdin);  
        s[i][strcspn(s[i], "\n")] = '\0';
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (strcmp(s[i], s[j]) > 0) { 
                strcpy(temp, s[i]);       
                strcpy(s[i], s[j]);
                strcpy(s[j], temp);
            }
        }
    }

    printf("\nCac chuoi da duoc sap xep theo thu tu chu cai:\n");
    for (i = 0; i < 5; i++) {
        printf("%s\n", s[i]);
    }

    return 0;
}
