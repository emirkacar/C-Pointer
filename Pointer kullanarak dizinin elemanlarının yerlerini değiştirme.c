#include <stdio.h>
#include <stdlib.h>




int main()
{

   int *p1,*p2,n,i;
   printf("Dizinin eleman sayisini giriniz: ");
   scanf("%d",&n);
   int dizi[150];
   for(i=0;i<n;i++)
   {
       printf("Eleman %d: ",i);
       scanf("%d",&dizi[i]);

   }

   printf("Dizinin normal hali: ");
   for(p1=dizi;p1<dizi+n;p1++)
   {
       printf("%d ",*p1);
   }

   p2=dizi+n-1;
   printf("\n");
   printf("Dizimizin yerleri degismis hali: ");

   for(p2;p2>=dizi;p2--)
   {
       printf("%d ",*p2);
   }






    return 0;
}
