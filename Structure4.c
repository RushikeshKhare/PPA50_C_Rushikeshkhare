#include<stdio.h>

#pragma pack(1)                 // telling PreProcessor to give memory byte by byte.
struct Student                  // // Declaration of structure.
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

    printf("Size of object is : %d\n", sizeof(Amit));

    return 0;
}