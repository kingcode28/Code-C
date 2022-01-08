#include <stdio.h>

void nhapMangCSC(int a[], int length, int u1, int d);
void inMang(int a[], int length);

int main()
{
    int u1, d;
    int a[20];
    printf("Nhap so u1 va cong sai d: ");
    scanf("%d %d", &u1,&d);
    nhapMangCSC(a, 10, u1, d);
    inMang(a, 10);
}

void nhapMangCSC(int a[], int length, int u1, int d)
{
    int i;
    for(i=0; i<length; i++)
    {
        a[i] = u1;
        u1 += d;
    }
}
void inMang(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        printf("%5d", a[i]);
}