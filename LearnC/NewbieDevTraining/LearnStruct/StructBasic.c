#include <stdio.h>

struct infoStudent{
    char name[50];
    int age;
    char studentID[10];
    float GPA;
};
typedef struct infoStudent Student;

void inputStudent(Student student[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter student name: ");
        scanf(" %[^\n]",&student[i].name);
        printf("Enter student age: ");
        scanf("%d",&student[i].age);
        printf("Enter student ID: ");
        scanf(" %[^\n]",&student[i].studentID);
        printf("Enter student GPA: ");
        scanf("%f",&student[i].GPA);
    }
}

void printStudent(Student student[], int n){
    for(int i = 0; i < n; i++){
        printf("Name: %s\n", student[i].name);
        printf("Age: %d\n", student[i].age);
        printf("Student ID: %s\n", student[i].studentID);
        printf("GPA: %f\n", student[i].GPA);
    }
}

int main(){
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student student[n];
    inputStudent(student, n);
    printStudent(student, n);
}