#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int kiemTra2SoCanhNhauCoLaSoChan(int a[], int length);

int main()
{
    srand(time(NULL));
    int a[10];
    nhapMang(a, 6);
    inMang(a, 6);
    int ketQua = kiemTra2SoCanhNhauCoLaSoChan(a, 6);
    printf(ketQua ? "\nCo 2 so chan canh nhau" : "\nKhong co 2 so chan canh nhau");
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
int kiemTra2SoCanhNhauCoLaSoChan(int a[], int length)
{
    int i;
    for(i=0; i< length-1; i++)
        if(a[i]%2 == 0 && a[i+1]%2 == 0) return 1;
    return 0;
}