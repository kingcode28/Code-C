#include <stdio.h>
#include <string.h>

void xoaXauTuA_B(char *xau, int n)
{
    // int i, j;
    // for(i=0, j= n; j<=strlen(xau); i++, j++)
    //     xau[i] = xau[j];
    strcpy(xau, xau+n);
}

int main()
{
    char x[] = "Do Thanh Hau";
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    xoaXauTuA_B(x, n);
    puts(x);
}

