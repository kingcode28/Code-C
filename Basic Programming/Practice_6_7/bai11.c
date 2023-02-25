#include <stdio.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int kiemTraCoTangDan(int a[], int length);

int main()
{
    int a[10];
    nhapMang(a, 4);
    inMang(a, 4);
    printf(kiemTraCoTangDan(a, 4) ? "\nMang tang dan" : "\nMang khong tang dan");
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
int kiemTraCoTangDan(int a[], int length)
{
    int i;
    for(i=0; i< length-1; i++)
        if(a[i] > a[i+1]) return 0;
    return 1;
}