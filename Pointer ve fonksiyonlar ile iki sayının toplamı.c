#include <stdio.h>
#include <stdlib.h>
int topla(int *sayi1,int *sayi2)
{
    return *sayi1+*sayi2;

}
int main()
{
   int a=10;
   int b=20;
   int toplamSonucu=topla(&a,&b);
   printf("%d",toplamSonucu);




    return 0;
}
