#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *kis[3]={"Aralik","Ocak","Subat"};
    char *ilkbahar[3]={"Mart","Nisan","Mayis"};
    char *yaz[3]={"Haziran","Temmuz","Agustos"};
    char *sonbahar[3]={"Eylul","Ekim","Kasim"};

    char **mevsimler[4];
    mevsimler[0]=kis;
    mevsimler[1]=ilkbahar;
    mevsimler[2]=yaz;
    mevsimler[3]=sonbahar;

    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%s\t ",mevsimler[i][j]);
        }
        printf("\n");
    }





    return 0;
}
