#include <stdio.h>

#define swap(a, b) {int t=a; a=b; b=t;}

void nhapMang(float a[], int n)
{
    for(int i = 0; i < n; i++)
        scanf("%f", &a[i]);
}
void inMang(float a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%g ", a[i]);
}
void bubbleSort(float a[], int n)
{
    int i, j;
    for(i = 1; i < n; i++)
        for(j = 0; j < n-1; j++)
            if(a[j] > a[j+1]) swap(a[j], a[j+1]);
}

int main()
{
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    float a[n];
    nhapMang(a, n);
    inMang(a, n);
    bubbleSort(a, n);
    putchar('\n');
    inMang(a, n);
}