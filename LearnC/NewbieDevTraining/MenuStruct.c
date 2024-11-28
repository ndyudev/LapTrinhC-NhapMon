#include <stdio.h>
#include <string.h>

// Struct Score
struct Score {
    float C;
    float Java;
    float Web;
};

// Struct Address
struct Address {
    char tenDuong[30];
    char tenPhuong[30];
    char tenTP[30];
};

// Struct InfoStudent
struct InfoStudent {
    char ten[30];
    int tuoi;
    char MSSV[10];
    char email[30];
    char sdt[15];
    struct Address address;
    struct Score score;
};

// Hàm nhập thông tin sinh viên
void inputInfoStudent(struct InfoStudent sv[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Nhap ten sinh vien: ");
        fgets(sv[i].ten, sizeof(sv[i].ten), stdin);
        sv[i].ten[strcspn(sv[i].ten, "\n")] = '\0'; // Xóa ký tự '\n'

        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &sv[i].tuoi);
        getchar(); // Xóa ký tự '\n' thừa trong bộ đệm

        printf("Nhap MSSV sinh vien: ");
        fgets(sv[i].MSSV, sizeof(sv[i].MSSV), stdin);
        sv[i].MSSV[strcspn(sv[i].MSSV, "\n")] = '\0';

        printf("Nhap email sinh vien: ");
        fgets(sv[i].email, sizeof(sv[i].email), stdin);
        sv[i].email[strcspn(sv[i].email, "\n")] = '\0';

        printf("Nhap so dien thoai sinh vien: ");
        fgets(sv[i].sdt, sizeof(sv[i].sdt), stdin);
        sv[i].sdt[strcspn(sv[i].sdt, "\n")] = '\0';

        printf("Nhap ten duong: ");
        fgets(sv[i].address.tenDuong, sizeof(sv[i].address.tenDuong), stdin);
        sv[i].address.tenDuong[strcspn(sv[i].address.tenDuong, "\n")] = '\0';

        printf("Nhap ten phuong: ");
        fgets(sv[i].address.tenPhuong, sizeof(sv[i].address.tenPhuong), stdin);
        sv[i].address.tenPhuong[strcspn(sv[i].address.tenPhuong, "\n")] = '\0';

        printf("Nhap ten thanh pho: ");
        fgets(sv[i].address.tenTP, sizeof(sv[i].address.tenTP), stdin);
        sv[i].address.tenTP[strcspn(sv[i].address.tenTP, "\n")] = '\0';

        printf("Nhap diem C: ");
        scanf("%f", &sv[i].score.C);

        printf("Nhap diem Java: ");
        scanf("%f", &sv[i].score.Java);

        printf("Nhap diem Web: ");
        scanf("%f", &sv[i].score.Web);
        getchar();
    }
}

// Hàm in thông tin sinh viên
void outputInfoStudent(struct InfoStudent sv[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nThong tin sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", sv[i].ten);
        printf("Tuoi: %d\n", sv[i].tuoi);
        printf("MSSV: %s\n", sv[i].MSSV);
        printf("Email: %s\n", sv[i].email);
        printf("SDT: %s\n", sv[i].sdt);
        printf("Dia chi: %s, %s, %s\n", sv[i].address.tenDuong, sv[i].address.tenPhuong, sv[i].address.tenTP);
        printf("Diem: C=%.2f, Java=%.2f, Web=%.2f\n", sv[i].score.C, sv[i].score.Java, sv[i].score.Web);
    }
}

int main() {
    int n;

    // Nhập số lượng sinh viên
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    getchar();


    struct InfoStudent sv[n];


    inputInfoStudent(sv, n);

    outputInfoStudent(sv, n);

    return 0;
}
