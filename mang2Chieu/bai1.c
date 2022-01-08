#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang2Chieu(int arr[][5], int m, int n);
void inMang2Chieu(int arr[][5], int m, int n);
int demSoChanMang2Chieu(int arr[][5], int m, int n);

int main()
{
    srand(time(NULL));
    int m, n;
    int a[8][8];
    printf("Nhap so dong: "); scanf("%d", &m);
    printf("Nhap so cot: "); scanf("%d", &n);
    nhapMang2Chieu(a, m, n);
    inMang2Chieu(a, m, n);
    printf("%d", demSoChanMang2Chieu(a, m, n));
}

void nhapMang2Chieu(int arr[][5], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            arr[i][j] = rand()%20;
}
void inMang2Chieu(int arr[][5], int m, int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%5d", arr[i][j]);
        putchar('\n');
    }           
}
int demSoChanMang2Chieu(int arr[][5], int m, int n)
{
    int i, j, dem = 0;
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            if(arr[i][j]%2 == 0) dem++;
    return dem;
}
