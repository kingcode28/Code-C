#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang2Chieu(int a[][10], int m, int n);
void inMang2Chieu(int a[][10], int m , int n);
void tbTungCotMang2Chieu(int a[][10], int m, int n);

int main()
{
    srand(time(NULL));
    int  x[10][10];
    int m, n;
    printf("Nhap so dong, so cot: "); scanf("%d %d", &m, &n);
    nhapMang2Chieu(x, m, n);
    inMang2Chieu(x, m, n);
    tbTungCotMang2Chieu(x, m, n);
}

void nhapMang2Chieu(int a[][10], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            a[i][j] = rand()%20;
}
void inMang2Chieu(int a[][10], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }        
}
void tbTungCotMang2Chieu(int a[][10], int m, int n)
{
    int i, j, tong;
    for(j = 0; j < n; j++)
    {
        for(i = tong = 0; i < m; i++)
            tong += a[i][j];
        printf("Tbc cot %d = %g\n", j+1, (float)tong/m);
    }
}