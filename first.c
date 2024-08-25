#include<stdio.h>

int x = 21;

extern int no;          //we took it fron another file

int main()
{
    printf("%d\n", x);
    printf("%d\n" no);

    return 0;
}