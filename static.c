/*
in this program static function is not used it is used in static1.c
this program is just to tell difference.
*/
#include<stdio.h>

void Marvellous()
{
    int x = 10;
    x++;
    printf("Value of x is : %d\n", x);
}

int main()
{
    printf("Demonstration of static storage calss...\n");

    Marvellous();
    Marvellous();
    Marvellous();

    return 0;
}
