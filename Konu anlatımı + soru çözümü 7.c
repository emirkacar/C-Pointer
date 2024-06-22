#include <stdio.h>
#include <stdlib.h>
int enBuyuk(int *dizi,int boyut)
{
    int enb=*dizi;
    int i=0;
    while(i<boyut)
    {
        if(enb<dizi[i])
        {
            enb=dizi[i];
        }
        i++;
    }
    return enb;
}

int main()
{
    int dizi[]={5,1,7,3,4};
    int sonuc=enBuyuk(dizi,5);  //Dizinin onune & koymadým.Cunku dizinin adresi degil icerigi geciriliyor.
    printf("Dizinin en buyuk elemani = %d",sonuc);

    return 0;
}
