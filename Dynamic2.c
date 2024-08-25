#include<stdio.h>
#include<stdlib.h>  // for malloc, calloc, realloc & free

int main()
{
    int Arr[5];         // static memory allocation
    int Size = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d", &Size);

    ptr = (int *)calloc(Size , sizeof(int));
    //ptr = (int *)calloc(12 , 500ml); this is only example

    // use the memory

    free(ptr);


    return 0;
}