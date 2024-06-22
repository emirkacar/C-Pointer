#include <stdio.h>
#include <stdlib.h>
void tek(int *p,int boyut)
{
    while(*p<boyut)
    {
        if((*p)%2==1)
        {
            printf("%d ",*p);
        }
        *p++;
    }
    printf("\n");
}
void cift(int *h,int length)
{
    int i;
    for(i=*h;i<length;i++)
    {
        if((*h)%2==0)
        {
            printf("%d ",*h);
        }
        (*h)++;

    }
}

int main()
{
    int dizi[100]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    tek(dizi,15);
    cift(dizi,15);
    return 0;
}
