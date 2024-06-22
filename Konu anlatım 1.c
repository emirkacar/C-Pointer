#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1=5;
    int sayi2=7;
    int *p1;
    int *p2;
    p1=&sayi1;   //p1,sayi1'in adresine esittir.Pointerlar adres tutar.Pointerlar deger tutmaz.
    p2=&sayi2;   //sayi2'nin adresi demek.
    printf("%d\n",p2);
    printf("%d\n",&sayi2);
    printf("%d\n\n",*p2);//*p2:p2 pointerı'nın adresinin icerigi demek.


    printf("%d\n",p1);
    printf("%d\n",&p1);
    printf("%d\n\n\n",*p1);

    *p1=*p1+3;
    printf("Sayi1:%d\n",sayi1);
    printf("p1:%d\n",*p1);
    *p2= *p2 + *p1;
    printf("sayi2:%d\n\n",sayi2);
    sayi2 = sayi2 * 2;
    printf("*p2:%d",*p2);

    //Pointerlar adres tutar.







    return 0;
}
