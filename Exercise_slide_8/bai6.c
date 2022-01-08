#include <stdio.h>
#include <string.h>

int laPhuAm(char n);
int demSoPhuAm(char *xau);

int main()
{
    char x[] = "hom nay la thu tu";
    printf("%d", demSoPhuAm(x));
}

int laPhuAm(char n)
{
    if(n >= 'A' && n <= 'z')
    {
        switch(n)
        {
            case 'u': case 'e': case 'o': case 'a': case 'i':
            case 'U': case 'E': case 'O': case 'A': case 'I':
                return 0;
            default:
                return 1;
        }
    }
    else return 0;
}
int demSoPhuAm(char *xau)
{
    int i, dem=0;
    for(i=0; i<strlen(xau); i++)
        if(laPhuAm(xau[i])) dem++;
    return dem;
}