#include <stdio.h>

void printH() {
    printf("C   C\n");
    printf("C   C\n");
    printf("C   C\n");
    printf("C   C\n");
    printf("CCCCC\n");
    printf("C   C\n");
    printf("C   C\n");
    printf("C   C\n");
    printf("\n");
}

void printE() {
    printf("CCCCC\n");
    printf("C\n");
    printf("C\n");
    printf("C\n");
    printf("CCCCC\n");
    printf("C\n");
    printf("C\n");
    printf("CCCCC\n");
    printf("\n");
}

void printL() {
    printf("C\n");
    printf("C\n");
    printf("C\n");
    printf("C\n");
    printf("C\n");
    printf("C\n");
    printf("CCCCC\n");
    printf("\n");
}

void printO() {
    printf(" CCC \n");
    printf("C   C\n");
    printf("C   C\n");
    printf("C   C\n");
    printf("C   C\n");
    printf("C   C\n");
    printf(" CCC \n");
    printf("\n");
}

void printW() {
    printf("C       C\n");
    printf("C       C\n");
    printf("C       C\n");
    printf("C       C\n");
    printf("C   C   C\n");
    printf(" C C C C\n");
    printf("  C   C\n");
    printf("\n");
}

void printR() {
    printf("CCCCC\n");
    printf("C   C\n");
    printf("C   C\n");
    printf("CCCCC\n");
    printf("C  C\n");
    printf("C   C\n");
    printf("C    C\n");
    printf("\n");
}

void printD() {
    printf("CCCC\n");
    printf("C   C\n");
    printf("C    C\n");
    printf("C    C\n");
    printf("C    C\n");
    printf("C   C\n");
    printf("CCCC\n");
    printf("\n");
}

int main() {
    for (int i = 0; i < 2; i++) printf("\n"); // Thêm khoảng trống trên
    printH();
    printE();
    printL();
    printL();
    printO();
    for (int i = 0; i < 2; i++) printf("\n"); // Dòng cách giữa "HELLO" và "WORLD"
    printW();
    printO();
    printR();
    printL();
    printD();
    for (int i = 0; i < 2; i++) printf("\n"); // Thêm khoảng trống dưới
    return 0;
}
