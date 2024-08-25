#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int fd = 0;     // fd = file discripter

    printf("Enter the name of file that you want to create : \n");
    scanf("%s", Name);      // we didnt use & operator in front of name because its Array

    fd = creat(Name, 0777);
    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets created with FD %d\n", fd);
    }

    return 0;
}