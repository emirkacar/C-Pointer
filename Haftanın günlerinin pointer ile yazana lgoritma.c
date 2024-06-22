#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *gun[7]={"pazartesi","sali","carsamba","persembe","cuma","cumartesi","pazar"};
    int i;

   do
   {
       printf("Lutfen 1 ve 7 arasinda bir deger giriniz: ");
        scanf("%d", &i);
        if(i>=1 && i<=7)
        {
            printf("%d numarali gun %s'dir",i,gun[i-1]);
        }
        else
        {
            printf("Hatali giris tekrar deneyiniz\n");
        }

   }while(i<1 || i>7);


    return 0;
}
