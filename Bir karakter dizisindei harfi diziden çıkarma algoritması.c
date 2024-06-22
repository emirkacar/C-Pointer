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
    for(p=karakter;*p;p++)
    {
        if(*p==ch)
        {
            strcpy(p,(p+1));
        }
    }
    printf("Karakter dizisinin son hali:%s",karakter);


    return 0;
}
