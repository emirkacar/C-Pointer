#include <stdio.h>
#include <stdlib.h>
//Bu metod kendisine gonderilen karakter dizisinin son 3 karakterini return eder.
char *sonuc(char dizi[])
{
    int len =strlen(dizi);
    dizi+= len - 3;
    return dizi;

}

int main()
{
    char dizi[]="Merhaba";
    char *psonuc=sonuc(dizi);
    printf("%s",psonuc);

    return 0;
}
