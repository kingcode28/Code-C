#include <stdio.h>
#include <string.h>

void chepTuMDenHetXau(char *x1, char *x2, int m)
{
    int i, j;
    for(i=0, j=0; i<strlen(x1); i++)
    {
        if(i >= m)
        {
            x2[j] = x1[i];
            j++;
        }
    }
    x2[j] = '\0';
}

int main()
{
    char s[] = "abc123456";
    char ss[30];
    chepTuMDenHetXau(s, ss, 5);
    puts(ss);
    printf("%d", strlen(ss));
}