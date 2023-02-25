#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(a, b) {int t=a; a=b; b=t;}

void nhapMang2Chieu(int a[][10], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            a[i][j] = rand()%8;
}
void inMang2Chieu(int a[][10], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%5d", a[i][j]);
        putchar('\n');
    }
}
void sapXepVTDauTang(int a[][10], int m, int n)
{
    int i, j, k;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            for(k = 0; k < n-1; k++)
                if(a[i][k] > a[i][k+1]) swap(a[i][k], a[i][k+1]);
}

int main()
{
    srand(time(NULL));
    int m, n;
    int x[10][10];
    printf("Nhap so dong, so cot: ");
    scanf("%d %d", &m,&n);
    nhapMang2Chieu(x, m, n);
    inMang2Chieu(x, m, n);
    sapXepVTDauTang(x, m, n);
    puts("Sau khi sap xep");
    inMang2Chieu(x, m, n);
}