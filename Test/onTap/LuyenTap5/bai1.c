#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
        a[i] = rand()%9;
}
void inMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%5d", a[i]);
}
int viTriCuaX(int a[], int n, int x)
{
    for(int i = 0; i < n; i++)
        if(a[i] == x) return i;
}
int main()
{
    srand(time(NULL));
    int n, x;
    printf("Nhap n: "); scanf("%d", &n);
    int a[n];
    nhapMang(a, n);
    inMang(a, n);
    printf("Nhap so x: "); scanf("%d", &x);
    printf("%d", viTriCuaX(a, n, x));
}






