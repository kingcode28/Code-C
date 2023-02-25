#include <stdio.h>
#include <string.h>

void xoaXauTuA_B(char *xau, int a, int b);
void xoaTatCaXauCon(char *xau, char *xauCon);

int main()
{
    char x[] = "qui134nhon";
    char xc[] = "134";
    xoaTatCaXauCon(x, xc);
    puts(x);
}

void xoaXauTuA_B(char *xau, int a, int b)
{
    int i, j;
    for(i=a, j= b+1; j<=strlen(xau); i++, j++)
        xau[i] = xau[j];
}
void xoaTatCaXauCon(char *xau, char *xauCon)
{
    char *p;
    p = strstr(xau, xauCon);
    while(p != NULL)
    {
        xoaXauTuA_B(p, 0, strlen(xauCon)-1);
        p = strstr(xau, xauCon);
    }
}