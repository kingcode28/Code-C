#include <stdio.h>
#include <string.h>

void xoaDauCach(char *xau);

int main()
{
    char s[] = "   Do  Thanh   Hau   ";
    xoaDauCach(s);
    puts(s);
}

void xoaDauCach(char *xau)
{
    char *p;
    p = strstr(xau, " ");
    while(p != NULL)
    {
        strcpy(p, p+1);
        p = strstr(xau, " ");
    }

}