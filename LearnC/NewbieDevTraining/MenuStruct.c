// Srore : điểm C , Điểm Java, Web
// Address : Tên Đường , Tên Phường , TP
// InfoStudent: tên, tuổi, mssv, email, sdt, địa chỉ, điểm C, Điểm Java, Điểm Web
// Viết Menu : In ra thông tin sinh viên
// In ra sv có điểm tb lớn hơn 5 và lớn hơn 8
// In ra InfoStudent có ở tphcm 
// In ra InfoStudent có tuổi > 18
// In ra InfoStudent  thỏa điều kiện có điểm C > 8 và điểm Java  < 8

void displayMenu() {
    printf("Menu");
    printf("1. Score");
    printf("2. InfoStudent");
    printf("3.Age > 18");
    printf("4. Score C > 8 & Java < 8");
}

void inputInfoStudent(struct InfoStudent infoStudent) {
    printf("Enter name: ");
    scanf("%s", &name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter MSSV: ");
    scanf("%s", &mssv);
    printf("Enter email: ");
    scanf("%s", &email);
    printf("Enter phone: ");
    scanf("%s", &phone);
    printf("Enter address: ");
    scanf("%s", &address);
}

void ouputInfoStudent(struct InfoStudent infoStudent) {
    printf("Name: %s\n", InfoStudent.name);
    printf("Age: %d\n", InfoStudent.age);
    printf("MSSV: %s\n", InfoStudent.mssv);
    printf("Email: %s\n", InfoStudent.email);
    printf("Phone: %s\n", InfoStudent.phone);
    printf("Address: %s\n", InfoStudent.address);
}

    struct Address
    {
        char duong[25];
        char phuong[25];
        char thanhpho[25];
    };
    struct Score
    {
        int C;
        int Java;
    };  
    struct InfoStudent
    {
        char name[25];
        int age;
        char MSSV[15];
        char email[50];
        char sdt[15];
        char diachi[100];
        struct Score score;
        struct Address address;
    };

int main() {
    int score, choice;

    inputInfoStudent(infoStudent);
    ouputInfoStudent(infoStudent);
    displayMenu();
}