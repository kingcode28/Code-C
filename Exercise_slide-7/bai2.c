#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int timSoChanDauTien(int a[], int length);

int main()
{
    srand(time(NULL));
    int a[100], ketQua;
    nhapMang(a, 10);
    inMang(a, 10);
    ketQua = timSoChanDauTien(a, 10);
    printf(ketQua ? "\nSo chan dau tien: %d" : "\nKhong co so chan", ketQua);
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
int timSoChanDauTien(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        if(a[i]%2 == 0)
            return a[i];
    return 0;
}
