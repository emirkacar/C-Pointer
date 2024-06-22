#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[100];
    int *pt;
    pt=t;
    int i;
    for(i=0;i<100;i++)
    {
        t[i]=0;
    }
    for(i=0;i<100;i++)
    {
        printf("%d\n",*pt);
    }
    return 0;
}
