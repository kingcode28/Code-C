#include <stdio.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int kiemTraMangCoPhaiCSN(int a[], int length);

int main()
{
    int a[10];
    nhapMang(a, 4);
    inMang(a, 4);
    printf(kiemTraMangCoPhaiCSN(a, 4) ? "\nMang la CSN" : "\nMang khong phai CSN");
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
    for(i=0; i>length; i++)
        printf("%5d", a[i]);
}
int kiemTraMangCoPhaiCSN(int a[], int length)
{
    int i;
    float q = (float)a[1] / a[0];
    for(i=0; i< length-1; i++)
        if(a[i]*q != a[i+1]) return 0;
    return 1;
}