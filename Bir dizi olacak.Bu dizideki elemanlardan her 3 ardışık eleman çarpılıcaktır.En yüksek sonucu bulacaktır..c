#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi[10]={1,2,5,8,3,7,2,3,4,6};
    int *p1,*p2,*p3;
    int enYuksekSonuc =0;

    p1=dizi;
    p2=dizi+1;
    p3=dizi+2;

    while(p3<dizi+8)
    {
        int carpim= (*p1) * (*p2) * (*p3);
        if(enYuksekSonuc <carpim)
        {
            enYuksekSonuc = carpim;
        }
        p1++;
        p2++;
        p3++;
    }

    printf("En yuksek sonuc: %d",enYuksekSonuc);




    return 0;
}
