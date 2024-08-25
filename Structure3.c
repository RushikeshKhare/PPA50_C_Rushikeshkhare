#include<stdio.h>

struct Student                  // Declaration of structure.
{
    int RollNo;                 // 4 byte
    char Division;              // 1 byte
    int Age;                    // 4 byte
    float Marks;                // 4 byte
    int Salary;                 // 4 byte
};

int main()
{
    struct Student Amit;            // object of structure
    struct Student Pooja;           // object of structure

    printf("Size of object is : %d\n", sizeof(Amit));

    Amit.RollNo = 11;               // initializing Sturcture
    Amit.Division = 'A';
    Amit.Marks = 90.89;
    Amit.Age = 19;
    Amit.Salary = 21000;

    Pooja.RollNo = 21;
    Pooja.Division = 'D';
    Pooja.Marks = 93.67;
    Pooja.Age = 17;
    Pooja.Salary = 5000;

    printf("Age of Amit is : %d\n", Amit.Age);
    printf("Age of Pooja is : %d\n", Pooja.Age);

    printf("Salary of Amit is : %d\n", Amit.Salary);
    printf("Salary of Pooja is : %d\n", Pooja.Salary);


    return 0;
}