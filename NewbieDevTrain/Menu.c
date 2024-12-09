#include<stdio.h>
#include<string.h>
void bai1();
void bai2();
void bai3();
void xuatSV();
void bai4();
void bai5();
void bai6();
void Menu();
void nhapDSSV();
void sort();
float Max();
float grade2ND();
int checkChuSoChan();
int main(){
    Menu();
}

void Menu(){
    int x;
    printf("===============================MENU=================================\n");
    printf("|| 1.  PRINT MULTIPLICATION TABLE OF A GIVEN NUMBER                ||\n");
    printf("|| 2.  PROGRAM TO PRINT REVERSE OF A NUMBER                        ||\n");
    printf("|| 3.  PROGRAM TO COUNT DUPLICATE ELEMENTS IN ARRAY                ||\n");
    printf("|| 4.  PROGRAM TO FIND SECOND HIGHEST AVERAGE GRADE OF STUDENT     ||\n");
    printf("|| 5.  FIND EVEN DEGITS OF NUMBER                                  ||\n");
    printf("|| 6.  SORT ASCENDING BY VALUE OF ELEMENTS FROM INTEGER ARRAY      ||\n");
    printf("|| 0.  END                                                         ||\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   
    
    do{
        printf ("\nNhập lựa chọn của bạn : ");
        scanf("%d",&x);
        getchar(); 
        switch (x)
            {
                case 1:
                    printf("PRINT MULTIPLICATION TABLE OF A GIVEN NUMBER \n");
                    bai1();
                    break;
                case 2:
                    printf("PROGRAM TO PRINT REVERSE OF A NUMBER\n");
                    bai2();
                    break;
            
                case 3:
                    printf("PROGRAM TO COUNT DUPLICATE ELEMENTS IN ARRAY\n");
                    bai3();
                    break;
                case 4:
                    printf("PROGRAM TO FIND SECOND HIGHEST AVERAGE GRADE OF STUDENT\n");
                    bai4();
                    break;
                case 5:
                    printf("FIND EVEN DEGITS OF NUMBER\n");
                    bai5();
                    break;
                case 6:
                    printf("SORT ASCENDING BY VALUE OF ELEMENTS FROM INTEGER ARRAY\n");
                    bai6();
                    break;
                

                case 0: 
                    printf ("Tạm biệt !!!");
                    break;
                default:
                    printf("Lựa chọn không hợp lệ. Vui lòng thử lại.\n");
                    break;
            }
        if(x!=0){
            
        }
    }while(x!=0);
}

void bai1(){
    int n;
    printf("Nhập số bạn muốn in bảng cửu chương : ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}

void bai2(){
    int n;
    int x=0;
    printf("Nhập số nguyên dương : ");
    scanf("%d",&n);
    x=daoNguoc(n);
    printf("Số đảo ngược của %d là %d",n,x);
}
int daoNguoc(int n){
    int a=0;
    do{
        a=a*10+n%10;
        n/=10;
    }while(n!=0);
    return a;
}
void bai3(){
    int n,temp,dem=0;
    do{
        printf("Nhập số lượng phần tử của mảng : ");
        scanf("%d",&n);
    }while(n<2);
    
    int array[n];
    for(int i=0;i<n;i++){
        printf("Nhập phần tử thử %d : ",i+1);
        scanf("%d",&array[i]);
    }
    
    for(int i=0;i<n;i++){
        temp = 0;
        for (int k = 0; k < i; k++) {
            if (array[i] == array[k]) {
                temp = 1; 
                break;
            }
        }
        if (temp == 0) { 
            for (int j = i + 1; j < n; j++) {
                if (array[i] == array[j]) {
                    printf("PT %d bị lặp!\n ", array[i]);
                    dem++;
                    break; 
                }
            }
        }
    }
    
    printf("Số lượng các phần tử bị lặp là %d",dem);
}

//Bai4:
struct Grade{
    double math;
    double physic;
    double english;

} typedef Grade;
struct Student{
    char id[10];
    char name[50];
    Grade grade;
}typedef Student;
void bai4(){
    int n;
    printf("Nhập số lượng sv : ");
    scanf("%d",&n);
    Student sv[n];
    nhapDSSV(sv,n);
    float y=grade2ND(sv,n);
    printf("THÔNG TIN SV CÓ ĐIỂM CAO THỨ 2: \n");
    printf("==========================================================================\n");
    printf("| %-11s | %-28s | %-8s | %-8s | %-8s |\n","Mã SV","Họ và tên","Math","Physic","English");
    printf("==========================================================================\n");
    for(int i=0;i<n;i++){
        if(sv[i].grade.math+sv[i].grade.english+sv[i].grade.physic==y){
            xuatSV(sv[i]);
        }
    }

};

void nhapDSSV(Student a[],int n){
    printf("Nhập thông tin SV \n");
    for(int i=0;i<n;i++){
        printf("SV thứ %d: \n",i+1);
        printf("Nhập ID: ");
        getchar();
        fgets(a[i].id,10,stdin);
        a[i].id[strlen(a[i].id)-1]='\0';
        printf("Nhập name: ");
        fgets(a[i].name,50,stdin);
        a[i].name[strlen(a[i].name)-1]='\0';
        printf("Nhập điểm Toán: ");
        scanf("%lf",&a[i].grade.math);
        printf("Nhập điểm Lý: ");
        scanf("%lf",&a[i].grade.physic);
        printf("Nhập điểm Tiếng Anh: ");
        scanf("%lf",&a[i].grade.english);
    }
}

void xuatSV(Student a){
    printf("| %-10s | %-24s | %-8.1lf | %-8.1lf | %-8.1lf |\n",a.id,a.name,a.grade.math,a.grade.physic,a.grade.english);
}
void xuatDSSV(Student a[],int n){
    printf("THÔNG TIN SV : \n");
    printf("==========================================================================\n");
    printf("| %-11s | %-28s | %-8s | %-8s | %-8s |\n","Mã SV","Họ và tên","Math","Physic","English");
    printf("==========================================================================\n");
    for(int i=0;i<n;i++){
        xuatSV(a[i]);
    }
}

float Max(Student a[],int n){
    float max=a[0].grade.math+a[0].grade.english+a[0].grade.physic;
    for(int i=1;i<n;i++){
        if(max<a[i].grade.math+a[i].grade.english+a[i].grade.physic){
            max=a[i].grade.math+a[i].grade.english+a[i].grade.physic;
        }
    }
    return max;
}
float grade2ND(Student a[],int n){
    float x=Max(a,n);
    float max2=0;
    for(int i=0;i<n;i++){
        if(a[i].grade.math+a[i].grade.english+a[i].grade.physic<x && max2<a[i].grade.math+a[i].grade.english+a[i].grade.physic){
            max2=a[i].grade.math+a[i].grade.english+a[i].grade.physic;
        }
    }
    return max2;
}


void bai5(){
    int n;
    do{
        printf("Nhập số lượng phần tử của mảng : ");
        scanf("%d",&n);
    }while(n<=0);
    
    int array[n];
    for(int i=0;i<n;i++){
        printf("Nhập phần tử thử %d : ",i+1);
        scanf("%d",&array[i]);
    }
    int dem=0;
    for(int i=0;i<n;i++){
        if(checkChuSoChan(array[i])==1){
            dem++;
        }
    }
    printf("Mảng có %d số có chứa chữ số chẵn !",dem);

}
int checkChuSoChan(int a){
    do{
        if(a%2==0){
            return 1;
        }
        a=a/10;
    }while(a!=0);
    return 0;
}

void bai6(){
    int n;
    do{
        printf("Nhập số lượng phần tử của mảng : ");
        scanf("%d",&n);
    }while(n<=0);
    
    int array[n];
    for(int i=0;i<n;i++){
        printf("Nhập phần tử thử %d : ",i+1);
        scanf("%d",&array[i]);
    }
    sort(array,n);
    printf("DS các pt sau sắp xếp là : ");
    for(int i=0;i<n;i++){
        printf("%d  ",array[i]);
    }

}
void sort(int a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}