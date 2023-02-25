#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define swap(a, b) {int t=a; a=b; b=t;}

void nhapMang(int a[], int length);
void inMang(int a[], int length);
void xepTangDan(int a[], int length);
void demSoLanXuatHienTungPhanTu(int a[], int length);

int main()
{
    srand(time(NULL));
    int a[10];
    nhapMang(a, 10);
    inMang(a, 10);
    xepTangDan(a, 10);
    demSoLanXuatHienTungPhanTu(a, 10);
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
void xepTangDan(int a[], int length)
{
    int i, j;
    for(i=0; i< length-1; i++)
        for(j= i+1; j<length; j++)
            if(a[i] > a[j]) swap(a[i], a[j]);
}
void demSoLanXuatHienTungPhanTu(int a[], int length)
{
    int i, dem=1;
    for(i=0; i<length; i++)
    {
        if(a[i] == a[i+1]) dem++;
        if(a[i] != a[i+1])
        {
            printf("\n%d xuat hien %d lan", a[i], dem);
            dem = 1;
        }
    }
}