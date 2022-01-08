#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int demLanXuatHien(int a[], int length, int x);

int main()
{
    srand(time(NULL));
    int x, dem;
    int a[20];
    nhapMang(a, 10);
    inMang(a, 10);
    printf("\nNhap x: ");
    scanf("%d", &x);
    dem = demLanXuatHien(a, 10, x);
    printf(dem ? "%d lan" : "Khong co %d trong mang", dem ? dem : x);
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
int demLanXuatHien(int a[], int length, int x)
{
    int i, dem=0;
    for(i=0; i<length; i++)
        if(a[i] == x) dem++;
    return dem;
}
