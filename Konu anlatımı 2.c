#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y)
{
  int gecici=*x;
  *x=*y;
  *y=gecici;
  printf("Fonksiyon icinde x:%d\n",*x);
  printf("Fonksiyon icinde y:%d\n",*y);

}


int main()
{
    int x=5;
    int y=8;
    swap(&x,&y);
    printf("Main icinde x: %d\n",x);
    printf("Main icinde y: %d\n",y);


    return 0;
}
