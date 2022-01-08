#include <stdio.h>

void tamGiacDac(int n);
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    tamGiacDac(n);
}

void tamGiacDac(int n)
{
    int i, j, k, l;
    for(i=1; i<=n; i++)
    {
        for(j=i; j<= n-1; j++)
            printf(" ");
        for(k=1; k<=i; k++)
            printf("* ");
        for(l=1; l<= i-1; l++)
            printf("* ");
        printf("\n");
    }
}