#include<stdio.h>

struct Hello
{
    int no;             // 4 byte
    float f;            // 4 byte
};

struct Demo
{
    int data;               // 4 byte
    struct Hello hobj;      // 8 byte
};
int main()
{
    struct Demo dobj;
    dobj.data = 11;
    dobj.hobj.no = 21;
    dobj.hobj.f = 90.00;
    
    return 0;
}