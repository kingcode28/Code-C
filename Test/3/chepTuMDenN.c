#include <stdio.h>
#include <string.h>

void chepTuMDenN(char *x1, char *x2, int m, int n)
{
    int i, j;
    for(i=0, j=0; i<strlen(x1); i++)
    {
        if(i >= m)
        {
            x2[j] = x1[i];
            j++;
            if(i == n) break;
        }
    }
    x2[j] = '\0';//em bỏ cái này thì kí tự cuối của sâu có tự động thêm \0 vào không ạ
}
int main()
{
    char s[] = "123456789";
    char ss[40];
    chepTuMDenN(s, ss, 2, 7);
    puts(ss);
}