#include <stdio.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int kiemTraMangDoiXung(int a[], int length);

int main()
{
    int a[10];
    nhapMang(a, 5);
    inMang(a, 5);
    printf(kiemTraMangDoiXung(a, 5) ? "\nLa mang doi xung" : "\nKhong phai mang doi xung");
}

void nhapMang(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        scanf("%d", &a[i]);
}
void inMang(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        printf("%5d", a[i]);
}
int kiemTraMangDoiXung(int a[], int length)
{
    int i;
    for(i=0; i<= length/2; i++)
        if(a[i] != a[length-i-1]) return 0;
    return 1;
}