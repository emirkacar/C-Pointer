#include <stdio.h>
#include <stdlib.h>

int main()
{
    char karakter[150];
    char *p;
    printf("Bir karakter dizisi giriniz \n");
    gets(karakter);
    for(p=karakter;*p; p++ )
    {

    }

    printf("Girdiginiz karakter dizisi %d karakterden olusmaktadir\n",p-karakter);
    return 0;
}
