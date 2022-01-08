#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int kiemTraSoChinhPhuong(int n);
int demSoChinhPhuong(int a[], int length);

int main()
{
    srand(time(NULL));
    int a[20], ketQua;
    nhapMang(a, 15);
    inMang(a, 10);
    ketQua = demSoChinhPhuong(a, 10);
    printf(ketQua ? "\nCo %d so chinh phuong" : "\nKhong co so chinh phuong", ketQua);
}

void nhapMang(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        a[i] = 1+rand()%20;
}
void inMang(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        printf("%5d", a[i]);
}
int kiemTraSoChinhPhuong(int n)
{
    int can2 = sqrt(n);
    if(can2*can2 == n) return 1;
    return 0;
}
int demSoChinhPhuong(int a[], int length)
{
    int i, dem=0;
    for(i=0; i<length; i++)
        if(kiemTraSoChinhPhuong(a[i])) dem++;
    return dem;
}