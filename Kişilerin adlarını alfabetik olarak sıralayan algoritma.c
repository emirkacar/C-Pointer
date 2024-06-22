#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Personel
{
    int sifre;
    char ad[10];
    char soyad[10];
    int yas;
    float maas;
    char cinsiyet[10];

}kisiler[];

void sirala(struct Personel kisiler[],int m)
{
    int i,j;
    struct Personel t;;
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(strcmp(kisiler[i].ad,kisiler[j].ad)>0)
            {
                t=kisiler[i];
                kisiler[i]=kisiler[j];
                kisiler[j]=t;
            }
        }

    }

}

void listele(struct Personel kisiler[],int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("%d %s %s %d %f %s\n",kisiler[i].sifre,kisiler[i].ad,kisiler[i].soyad,kisiler[i].yas,kisiler[i].maas,kisiler[i].cinsiyet);
    }
}

int main()
{
    int m;
    printf("m sayisini giriniz: ");
    scanf("%d",&m);
    char satir;
    struct Personel kisiler[m];
    int i;
    for(i=0;i<m;i++)
    {
        printf("Sifreyi giriniz:");
        scanf("%d",&kisiler[i].sifre);
        scanf("%c",&satir);
        printf("Adi giriniz:");
        gets(kisiler[i].ad);
        scanf("%c",&satir);
        printf("Soyadi giriniz:");
        gets(kisiler[i].soyad);
        scanf("%c",&satir);
        printf("Yasi giriniz:");
        scanf("%d",&kisiler[i].yas);
        scanf("%c",&satir);
        printf("Maasi giriniz:");
        scanf("%d",&kisiler[i].maas);
        scanf("%c",&satir);
        printf("Cinsiyeti giriniz:");
        gets(kisiler[i].cinsiyet);
    }



    listele(kisiler,m);
    sirala(kisiler,m);



    return 0;
}
