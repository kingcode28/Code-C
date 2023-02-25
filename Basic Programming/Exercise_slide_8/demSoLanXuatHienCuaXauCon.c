#include <stdio.h>
#include <string.h>

int demSoLanXuatHienCuaXauCon(char *xau, char *xauCon);

int main()
{
    char xau[255], xauCon[20];
    gets(xau);
    gets(xauCon);
    printf("%d", demSoLanXuatHienCuaXauCon(xau, xauCon));
}

int demSoLanXuatHienCuaXauCon(char *xau, char *xauCon)
{
    int dem=0;
    char *p;
    p = strstr(xau, xauCon);
    printf("xau    %x\n", xau);
    printf("xauCon %x\n", xauCon);
    printf("p      %x\n", p);
    printf("p+1    %x\n", p+1);
    printf("p+str  %x\n", p+strlen(xauCon));
    while(p != NULL)
    {
        dem++;
        p = strstr(p+strlen(xauCon), xauCon);
        printf("p-1 %x\n", p-1);
        printf("p-4 %x\n", p-4);
    }
    return dem;
}