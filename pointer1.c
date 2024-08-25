#include<stdio.h>

int main()
{
    int No = 11;
    int * ptr = &No;

    double Data = 90.999;
    double * dptr = &Data;

    printf("%d\n", No);                 // 11
    printf("%f\n", Data);               // 90.9999

    printf("%d\n", sizeof(No));         // 4 byte
    printf("%d\n", sizeof(ptr));        // 8 byte
    printf("%d\n", sizeof(Data));       // 8 byte
    printf("%d\n", sizeof(dptr));       // 8 byte

    printf("%d\n", *ptr);               // 11
    printf("%f\n", *dptr);              // 90.9999

    return 0;
}