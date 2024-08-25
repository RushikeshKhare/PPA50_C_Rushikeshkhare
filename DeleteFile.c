// use to delete the file permanently we can not recover that file from recyclebin
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int fd = 0;     // fd = file discripter

    printf("Enter the name of file that you want to delete : \n");
    scanf("%s", Name);      

    unlink(Name);
    
    return 0;
}