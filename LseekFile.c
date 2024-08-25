#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

// SEEK_SET     beginning of file
// SEEK_CUT     Current position
// SEEK_SET     End of the file
int main()
{
    char Name[30];
    int fd = 0;     // fd = file discripter
    int iRet = 0;
    char Data[30] = {'\0'};

    printf("Enter the name of file that you want to open : \n");
    scanf("%s", Name);

    fd = open(Name, O_RDWR);    // O_RDWR is macro
    lseek(fd,10,SEEK_SET);
    iRet = read(fd,Data,10);

    printf("%d bytes gets successfully read from the file\n", iRet);

    printf("%s\n", Data);
    
    close(fd);

    return 0;
}