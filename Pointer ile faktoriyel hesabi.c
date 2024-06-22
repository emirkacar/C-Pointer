#include <stdio.h>
#include <stdlib.h>
int faktoriyel (int *sayi)
{
    int sayac=1;
    int i;
    for(i=*sayi;i>0;i--)
    {
        sayac*=(*sayi);
        (*sayi)--;

    }
    return sayac;
}
int main()
{
    int n;
    printf("N tam sayisini giriniz: ");
    scanf("%d",&n);
    int sonuc=faktoriyel(&n);
    printf("Faktoriyel hesabi = %d",sonuc);

    return 0;
}
