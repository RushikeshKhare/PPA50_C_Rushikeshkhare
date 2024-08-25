#include<stdio.h>

struct Demo                   //structure declare
{
    int no;
    float f;
    double d;
};

int main()
{
    struct Demo obj;         //create object to allocate memory

    obj.no =11;              //intitializing member by using . operator
    obj.f = 90.99;           // the . operator is called direct accessing operator
    obj.d = 89.9999;

    printf("%d\n", obj.no);
    printf("%f\n", obj.f);
    printf("%f\n", obj.d);
    
    return 0;
}