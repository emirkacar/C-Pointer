#include <stdio.h>
#include <stdlib.h>




int main()
{
    char dizi[150]={'k','l','b','d','q','i','s','t','e','f','o','r','c','h','x','\0'};
    char *p1,*p2;
    char diziKopya[150];
    p2=diziKopya;



    for(p1=dizi;*p1;p1++)
    {
        *p2=*p1;
        p2++;
    }
    *p2='\0';


    printf("Orijinal tablo: ");
    int i;

    for(p1=dizi;*p1;p1++)
    {
        printf("%c ",*p1);
    }
    printf("\n");



    printf("Kopya tablo: ");


    for(p2=diziKopya;*p2;p2++)
    {
        printf("%c ",*p2);
    }



    return 0;
}
