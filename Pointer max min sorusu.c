#include <stdio.h>
#include <stdlib.h>

int enKucukEleman(int *x,int boyut)
{

    int i;
    int enk=*x;
    for(i=0;i<boyut;i++)
    {
        if(enk>*(x+i))
        {
            enk=*(x+i);
        }
    }
    return enk;


}




int enBuyukEleman(int *p,int boyut)
{


    int i;
    int maks=*p;
    for(i=0;i<boyut;i++)
    {
        if(maks<*(p+i))
        {
            maks=*(p+i);
        }
    }
    return maks;





}
int main()
{

   int dizi[100];
   int n;
   printf("Diziniz kac elemani olsun? ");
   scanf("%d",&n);
   int i;
   for(i=0;i<n;i++)
   {
       printf("Dizinin %d.elemani ",i+1);
       scanf("%d",&dizi[i]);
   }
   int enb=enBuyukEleman(dizi,n);
   printf("En buyuk eleman : %d\n",enb);
   int enk=enKucukEleman(dizi,n);
   printf("En kucuk eleman : %d",enk);


    return 0;
}
