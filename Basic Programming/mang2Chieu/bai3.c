#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang2Chieu(int a[][10], int m, int n);
void inMang2Chieu(int a[][10], int m, int n);
void nhan2MaTran(int a[][10], int b[][10], int c[][10], int m, int n, int p, int q);

int main()
{
    srand(time(NULL));
    int x[10][10], y[10][10], z[10][10];
    int m, n, p, q;
    printf("Nhap so dong, so cot mang X: "); scanf("%d %d", &m, &n);
    printf("Nhap so dong, so cot mang Y: "); scanf("%d %d", &p, &q);
    nhapMang2Chieu(x, m, n); nhapMang2Chieu(y, p, q);
    puts("Mang [X]"); inMang2Chieu(x, m, n);
    puts("Mang [Y]"); inMang2Chieu(y, p, q);
    nhan2MaTran(x, y, z, m, n, p, q);
    puts("Mang [Z] = [A].[B]"); inMang2Chieu(z, m, q);
}

void nhapMang2Chieu(int a[][10], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            a[i][j] = rand()%3;
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
void nhan2MaTran(int a[][10], int b[][10], int c[][10], int m, int n, int p, int q)
{
    int i, j, e, f, tong;
    if(n != p)
        printf("Loi!");
    else
        for(i = 0; i < m; i++)
            for(f = 0; f < q; f++)
            {
                tong = 0;
                for(j = e = 0; j < n; j++, e++)
                    tong += a[i][j]*b[e][f];
                c[i][f] = tong;
            }     
}

