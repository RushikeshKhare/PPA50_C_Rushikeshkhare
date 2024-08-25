#include<stdio.h>

void Marvellous()
{
    static int x = 10;
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
/*
    where the memory gets allocated :static section
    what is the default value : 0 / 0.0 / '/0'
*/