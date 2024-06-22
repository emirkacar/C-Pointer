#include <stdio.h>
#include <stdlib.h>

/*void mesajYaz(int *x)
{
    int i;
    for(i=1;i<=*x;i++)
    {
        printf("%d - Merhaba dunya\n",i);
    }

}*/
/*int carp(int *a,int *b)
{
    return *a * (*b);
}*/

void swap(int *x,int *y)
{
    int *gecici;
    gecici=*x;
    *x=*y;
    *y=gecici;
    printf("x'in yeni degeri :%d y'nin yeni degeri:%d",*x,*y);

}

int faktoriyelHesabi(int *sayi)
{
    int i;
    int faktoriyel=1;
    for(i=*sayi;i>0;i--)
    {
        faktoriyel*=i;
    }
    return faktoriyel;
}
int main()
{
    /*char *sehirler[]={"Adana","Antalya","Izmir","Manisa"};
    int i;
    for(i=0;sehirler[i]!= NULL;i++)
    {
        printf("%s\n",*(sehirler+i));
    }
    return 0;*/
    /*int x=10;
    mesajYaz(&x);
    printf("\n\n\n");*/


    /*int x=5;
    int y=10;
    int sonuc=carp(&x,&y);
    printf("Carpma isleminin sonucu:%d",sonuc);*/

    int x=10;
    int y=5;
    swap(&x,&y);
    printf("\n\n");
    int z=5;
    printf("%d sayisinin faktoriyeli= %d",z,faktoriyelHesabi(&z));






    return 0;



}
