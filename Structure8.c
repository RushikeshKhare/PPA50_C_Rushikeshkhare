#include<stdio.h>


struct Demo
{
    int data;               // 4 byte
    struct Hello
    {
        int no;             // 4 byte
        float f;            // 4 byte
    }hobj;
};
int main()
{
    struct Demo dobj;
    dobj.data = 11;
    dobj.hobj.no = 21;
    dobj.hobj.f = 90.00;
    
    return 0;
}