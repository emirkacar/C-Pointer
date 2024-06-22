#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dizi1[50];
    int dizi2[50];
    int *p1,*p2;
    int n,i,f;
    printf("Tablomuzun eleman sayisi: ");
    scanf("%d",&n);
    for(p1=dizi1;p1<dizi1+n;p1++)
    {
        scanf("%d",p1);
    }
    printf("\n");
    printf("Ikinci dizimizin eleman sayisi : ");
    scanf("%d",&f);
    for(p2=dizi2;p2<dizi2+f;p2++)
    {
        scanf("%d",p2);
    }
    printf("DIZI1\n");
    for(p1=dizi1;p1<dizi1+n;p1++)
    {
        printf("%d  ",*p1);
    }
    printf("\n");

    printf("DIZI2\n");

    for(p2=dizi2;p2<dizi2+f;p2++)
    {
        printf("%d  ",*p2);
    }
    printf("\n");


    p1 = dizi1 + n; // p1'i dizi1'in sonundan baþlat
    p2 = dizi2;
    while (p2 < dizi2 + f) {
        *p1 = *p2;
        p1++;
        p2++;
    }
    printf("Dizinin son hali \n");

    for(i=0;i<n+f;i++)
    {
        printf("%d ",*(dizi1+i));
    }



    return 0;
}
