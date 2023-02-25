#include <stdio.h>

#define swap(a, b) {int t=a; a=b; b=t;}

void nhapMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void inMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%5d", a[i]);
}
void bubbleSort(int a[], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
        for(j = 0; j < n-i-1; j++)
            if(a[j] > a[j+1]) swap(a[j], a[j+1]);
}

int main()
{
    int n;
    printf("Nhap do dai mang: ");
    scanf("%d", &n); int a[n];
    nhapMang(a, n);
    bubbleSort(a, n);
    inMang(a, n);
}