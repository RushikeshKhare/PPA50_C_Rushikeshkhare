#include<stdio.h>

int main()
{
    int Standard = 0;

    printf("Enter your Standard : \n");
    scanf("%d",&Standard);

    if(Standard == 1)
    {
        printf("Your exam is at 7 AM\n");
    }
    else if (Standard == 2)
    {
        printf("Your exam is at 8 AM\n");
    }
    else if (Standard == 3)
    {
        printf("Your exam is at 9 AM\n");
    }
    else if (Standard == 4)
    {
        printf("your exam is at 10 AM\n");
    }
    else
    {
        printf("wrong Standard\n");
    }
    return 0;
}