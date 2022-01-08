#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int laSoNguyenTo(int n);
int demSNT(int a[], int length); 

int main()
{
    srand(time(NULL));
    int a[40];
    nhapMang(a, 10);
    inMang(a, 10);
    printf("\nCo %d so nguyen to", demSNT(a, 10));
}

void nhapMang(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        a[i] = 1+rand()%10;
}
void inMang(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        printf("%5d", a[i]);
}
int laSoNguyenTo(int n)
{
    int j;
    if(n < 2) return 0;
    else
    {
        if(n == 2) return 1;
        if(n%2 == 0) return 0;
        for(j=3; j*j <= n; j+=2)
            if(n%j == 0) return 0;
        return 1;
    }
}
int demSNT(int a[], int length)
{
    int i, dem=0;
    for(i=0; i<length; i++)
        if(laSoNguyenTo(a[i])) dem++;
    return dem;
}
