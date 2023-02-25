#include <stdio.h>
#include <string.h>

void xoaTatCaXauCon(char *xau, char *xauCon);

int main()
{
    char a[] = "Do Hau Thanh Hau Hau";
    char b[] = "Hau";
    xoaTatCaXauCon(a, b);
    puts(a);
}

void xoaTatCaXauCon(char *xau, char *xauCon)
{
    char *p;
    p = strstr(xau, xauCon);
    while(p != NULL)
    {
        strcpy(p, p+strlen(xauCon));
        p = strstr(xau, xauCon);
    }
}