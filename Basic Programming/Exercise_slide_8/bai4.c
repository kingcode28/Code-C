#include <stdio.h>
#include <string.h>

void lapXauNLan(char *xau, int n, char *xauSauKhiLap);

int main()
{
    char xau[] = "123";
    char xauSauLap[1000];
    lapXauNLan(xau, 2, xauSauLap);
    puts(xauSauLap);
}

void lapXauNLan(char *xau, int n, char *xauSauKhiLap)
{
    int i;
    for(i=0; i<=n; i++)
        strcpy(xauSauKhiLap + i*strlen(xau), xau);
}