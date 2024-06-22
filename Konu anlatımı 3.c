#include <stdio.h>
#include <stdlib.h>
int enBuyukSayi(int *dizi,int length)
{
    int enb=dizi[0];
    int i;
    for(i=1;i<length;i++)
    {
        if(dizi[0]<dizi[i])
        {
            enb=dizi[i];
        }
    }
    return enb;
}

int main()
{
    int dizi[] = {5,1,7,3,4,12,1};
    int length=sizeof(dizi)/sizeof(dizi[0]);
    int sonuc=enBuyukSayi(dizi,length);
    printf("Dizinin en buyuk elemani : %d",sonuc);


    return 0;
}
