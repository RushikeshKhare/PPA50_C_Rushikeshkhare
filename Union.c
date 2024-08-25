#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int no;     // 4byte
    float f;    // 4 byte
    int data;   // 4 byte
    char ch;    // 1 byte
};              // Total 13 byte

union Hello
{
    int no;     // 4byte
    float f;    // 4 byte
    int data;   // 4 byte
    char ch;    // 1 byte
};              //4 byte

int main()
{
    struct Demo dobj;
    union Hello hobj;

    printf("Size of structure is : %d\n", sizeof(dobj));    // 13 byte
    printf("Size of Union is : %d\n", sizeof(hobj));   

    hobj.no = 11;

    printf("%d\n", hobj.no);

    hobj.data = 21;
    printf("%d\n", hobj.no);            //21
    printf("%d\n", hobj.data);          //21

    return 0;
}