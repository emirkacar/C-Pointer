#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void yasDegisikligi(int *yas,int *sonrakiYas)
{
    *yas+=*sonrakiYas;
}

int main()
{
   int yas,sonrakiYas;
   printf("Suan ki yasinizi giriniz: ");
   scanf("%d",&yas);

   srand(time(0));
    sonrakiYas=rand()%100;

   yasDegisikligi(&yas,&sonrakiYas);

   printf("%d yil sonra yasiniz : %d",sonrakiYas,yas);







    return 0;
}
