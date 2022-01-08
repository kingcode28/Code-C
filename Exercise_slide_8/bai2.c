#include <stdio.h>
#include <string.h>

int laNguyenAm(char n);
void viTriCacNguyenAm(char *xau);

int main()
{
    char s[30];
    gets(s);
    viTriCacNguyenAm(s);
}

int laNguyenAm(char n)
{
    switch(n)
    {
        case 'u': case 'e': case 'o': case 'a': case 'i':
        case 'U': case 'E': case 'O': case 'A': case 'I':
            return 1;
        default:
            return 0;
    }
}
void viTriCacNguyenAm(char *xau)
{
    int i;
    for(i=0; i<strlen(xau); i++)
        if(laNguyenAm(xau[i]))
            printf("a[%d] ", i);
}