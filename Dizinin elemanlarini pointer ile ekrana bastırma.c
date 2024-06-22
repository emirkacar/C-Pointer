#include <stdio.h>
#include <stdlib.h>


int main()
{
   int n;
   printf("Kac elemanli bir dizi olusturmak istiyorsunuz? ");
   scanf("%d",&n);
   int dizi[100];
   int *p;
   p=dizi;
   int i;
   for(i=0;i<n;i++)
   {
       printf("Dizinin %d.elemani: ",i+1);
       scanf("%d",p);
       p++;
   }
   printf("\n\n\n");
   p=dizi;
   for(i=0;i<n;i++)
   {
       printf("%d\n",*p);
       p++;

   }








    return 0;

}
