#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

// Cấu trúc dữ liệu nhân viên
struct Employee {
    int id;               // Ma nhan vien
    char name[50];        // Ten nhan vien
    char position[50];    // Chuc vu
    int departmentID;     // Ma phong ban
    float salary;         // Luong
};

// Hàm thêm nhân viên
void addEmployee(struct Employee employees[], int n) {
    printf("\n--- Nhap thong tin nhan vien ---\n");
    printf("Ma nhan vien: ");
    while (scanf("%d", &employees[n].id) != 1) { // Kiểm tra đầu vào
        printf("Loi: Ma nhan vien phai la so. Nhap lai: ");
        while (getchar() != '\n'); // Xóa bộ đệm
    }
    while (getchar() != '\n'); // Xóa bộ đệm còn lại

    printf("Ten nhan vien (khong dau): ");
    fgets(employees[n].name, sizeof(employees[n].name), stdin);
    employees[n].name[strcspn(employees[n].name, "\n")] = '\0'; // Loại bỏ ký tự '\n'

    printf("Chuc vu (khong dau): ");
    fgets(employees[n].position, sizeof(employees[n].position), stdin);
    employees[n].position[strcspn(employees[n].position, "\n")] = '\0';

    printf("Ma phong ban: ");
    while (scanf("%d", &employees[n].departmentID) != 1) {
        printf("Loi: Ma phong ban phai la so. Nhap lai: ");
        while (getchar() != '\n');
    }

    printf("Luong: ");
    while (scanf("%f", &employees[n].salary) != 1) {
        printf("Loi: Luong phai la so thuc. Nhap lai: ");
        while (getchar() != '\n');
    }
    printf("Them nhan vien thanh cong!\n");
}

// Các hàm còn lại không thay đổi logic nhưng bổ sung kiểm tra đầu vào

void displayEmployees(struct Employee employees[], int n) {
    printf("\n--- Danh sach nhan vien ---\n");
    for (int i = 0; i < n; i++) {
        printf("Ma: %d | Ten: %s | Chuc vu: %s | Phong ban: %d | Luong: %.2f\n",
               employees[i].id, employees[i].name, employees[i].position,
               employees[i].departmentID, employees[i].salary);
    }
}

void countEmployeesByDepartment(struct Employee employees[], int n) {
    int departmentCount[100] = {0};

    for (int i = 0; i < n; i++) {
        departmentCount[employees[i].departmentID]++;
    }

    printf("\n--- Thong ke nhan vien theo phong ban ---\n");
    for (int i = 0; i < 100; i++) {
        if (departmentCount[i] > 0) {
            printf("Phong ban %d: %d nhan vien\n", i, departmentCount[i]);
        }
    }
}

void sortEmployeesBySalary(struct Employee employees[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (employees[i].salary > employees[j].salary) {
                struct Employee temp = employees[i];
                employees[i] = employees[j];
                employees[j] = temp;
            }
        }
    }
    printf("\nDanh sach nhan vien da sap xep theo luong tang dan.\n");
}

void searchEmployeeByID(struct Employee employees[], int n) {
    int searchID;
    printf("\nNhap ma nhan vien can tim: ");
    while (scanf("%d", &searchID) != 1) {
        printf("Loi: Ma nhan vien phai la so. Nhap lai: ");
        while (getchar() != '\n');
    }

    for (int i = 0; i < n; i++) {
        if (employees[i].id == searchID) {
            printf("\n--- Thong tin nhan vien ---\n");
            printf("Ma: %d | Ten: %s | Chuc vu: %s | Phong ban: %d | Luong: %.2f\n",
                   employees[i].id, employees[i].name, employees[i].position,
                   employees[i].departmentID, employees[i].salary);
            return;
        }
    }
    printf("Khong tim thay nhan vien voi ma %d.\n", searchID);
}

void menu() {
    printf("\n--- QUAN LY NHAN VIEN ---\n");
    printf("1. Them nhan vien\n");
    printf("2. Hien thi danh sach nhan vien\n");
    printf("3. Tim kiem nhan vien theo ma\n");
    printf("4. Thong ke so luong nhan vien theo phong ban\n");
    printf("5. Sap xep nhan vien theo luong\n");
    printf("6. Thoat chuong trinh\n");
    printf("Chon chuc nang: ");
}

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;

    int choice;
    do {
        menu();
        while (scanf("%d", &choice) != 1) { // Kiểm tra đầu vào
            printf("Loi: Lua chon phai la so. Nhap lai: ");
            while (getchar() != '\n');
        }

        switch (choice) {
            case 1:
                if (employeeCount < MAX_EMPLOYEES) {
                    addEmployee(employees, employeeCount);
                    employeeCount++;
                } else {
                    printf("Khong the them nhan vien. Bo nho day!\n");
                }
                break;
            case 2:
                displayEmployees(employees, employeeCount);
                break;
            case 3:
                searchEmployeeByID(employees, employeeCount);
                break;
            case 4:
                countEmployeesByDepartment(employees, employeeCount);
                break;
            case 5:
                sortEmployeesBySalary(employees, employeeCount);
                displayEmployees(employees, employeeCount);
                break;
            case 6:
                printf("Thoat chuong trinh. Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 6);

    return 0;
}
