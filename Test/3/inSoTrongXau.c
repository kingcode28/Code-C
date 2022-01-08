#include <stdio.h>
#include <string.h>

void inCacKiTuSo(char *xau)
{
    int i;
    for(i = 0; i < strlen(xau); i++)
        if(xau[i] >= '0' && xau[i] <= '9')
            printf("%c", xau[i]);
}
void xoaKiTuNgatCau(char *xau)
{
    int i;
    char *a;
    for(i=0; i<strlen(xau); i++)
    {
        if(xau[i] == '.' || xau[i] == '?' || xau[i] == '!')
        {
            switch(xau[i])
            {
                case '.': a = strstr(xau, "."); break;
                case '?': a = strstr(xau, "?"); break;
                case '!': a = strstr(xau, "!"); break;
            }
            strcpy(a, a+1);
            i--;
        }
    }
}
int main()
{
    char s[] = "Do44Thanh982Hau13";
    inCacKiTuSo(s);
    putchar('\n');
    char ss[] = "Hom nay kiem tra... Chuc ban thi tot! Ban lam bai duoc khong?";
    xoaKiTuNgatCau(ss);
    puts(ss);
}