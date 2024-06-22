#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char karakter[150],ch;
    char *p;
    printf("Bir karakter dizisi giriniz \n");
    gets(karakter);

    printf("Kaldirmak istediginiz karakteri giriniz: ");
    scanf(" %c",&ch);

    p=karakter;

    while(*p)
    {
        if(*p==ch)
        {
            char *q=p;
            while(*q)
        {
            *q=*(q+1);
            q++;
        }
        }
        else
        {
            p++;
        }

    }
    printf("Kaldirildiktan sonra dizinin hali:%s",karakter);

    return 0;
}
