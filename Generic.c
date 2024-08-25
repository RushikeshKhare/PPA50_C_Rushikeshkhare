#include<stdio.h>

int main()
{
    char ch = 'A';
    int i = 11;
    float f = 90.99;
    double d = 90.56789;

    char *cp = &ch;     // specific pointer
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;

    void *vp = NULL;        //Generic pointer

    printf("%c\n", *cp);
    printf("%d\n", *ip);
    printf("%f\n", *fp);
    printf("%f\n", *dp);

    vp = &ch;           // Generic pointer
    printf("%c\n", *(char *)vp);

    vp = &i;
    printf("%d\n", *(int *)vp);

    vp = &f;
    printf("%f\n", *(float *)vp);

    vp = &d;
    printf("%f\n",*(double *)vp);

    return 0;
}