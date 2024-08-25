#include<stdio.h>

int main()
{
    printf("Inside main function...\n");

    char cValue = 'M';

    int iValue = 11;

    float fValue = 90.98f;
    
    double dValue = 90.67542378;

    return 0;
}

//Step 1; Compile the code
// gcc Premitive.c -o Myexe

// note: gcc is a part of MINGW software
//Step 2; Execute the code
// Myexe.exe (for windows)
// ./Myexe (for Linux of Macos)

// Premitive datatypes
/*
    void            we can not create variable
    char            1 byte
    int             4 byte
    float           4 byte
    double          8 byte
    boolean         1 bit

    Note : 1 byte = 8 bits
*/