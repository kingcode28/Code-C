#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int soLonHon2SoBenCanh(int a[], int length);
int main()
{
    srand(time(NULL));
    int a[20];
    nhapMang(a, 10);
    inMang(a, 10);
    printf(soLonHon2SoBenCanh(a, 10) ? "\na[%d]" : "\nKhong co so nao", soLonHon2SoBenCanh(a, 10));
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
int soLonHon2SoBenCanh(int a[], int length)
{
    int i;
    for(i=1; i< length-1; i++)
        if(a[i] > a[i-1] && a[i] > a[i+1]) return i;
    return 0;
}