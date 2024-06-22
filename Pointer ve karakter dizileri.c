#include <stdio.h>
#include <stdlib.h>

int main()
{
    char metin[]="Hello";
    printf("%s\n",metin);
    printf("%c\n",*metin);
    int i;
    for(i=0;metin[i] != '\0';i++)
    {
        printf("%c ",*(metin+i));
    }
    printf("\n\n\n");
    char *p;
    p=metin;
    printf("%c\n",*p);
    p++;
    printf("%c",*p);

    return 0;
}
