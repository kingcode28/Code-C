#include <stdio.h>
#include <string.h>

void xoaXauTuA_B(char *xau, int a, int b);

int main()
{
    char x[30];
    int a, b;
    fgets(x, sizeof x, stdin);
    printf("Nhap a, b: ");
    scanf("%d %d", &a,&b);
    xoaXauTuA_B(x, a, b);
    puts(x);
}

void xoaXauTuA_B(char *xau, int a, int b)
{
    int i, j;
    for(i=a, j= b; j<=strlen(xau); i++, j++)
        xau[i] = xau[j];
}