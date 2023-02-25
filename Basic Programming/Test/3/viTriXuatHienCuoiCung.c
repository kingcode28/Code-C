#include <stdio.h>
#include <string.h>

int viTriCuoiCungCuaXauCon(char *xau, char *xauCon)
{
    int i;
    char *a;
    a = strstr(xau, xauCon);
    if(a == NULL) return -1;
    while(a != NULL)
    {
        i = a - xau;
        a = strstr(a+strlen(xauCon), xauCon);
    }
    return i;
}

int main()
{
    char s[] = "abcabc";
    char sc[] = "abc";
    printf("%d", viTriCuoiCungCuaXauCon(s, sc));
}