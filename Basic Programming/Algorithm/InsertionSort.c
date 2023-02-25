#include <stdio.h>

#define swap(a, b) {int t=a; a=b; b=t;}

void inMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%5d", a[i]);
}
void insertionSort(int a[], int n)
{
    int i, j;
    for(i = 1; i < n; i++)
        for(j = i-1; j >= 0; j--)
            if(a[i] < a[j]) swap(a[i], a[j]);
}

int main()
{
    int a[] = {3, 2, 10, 5, 8, 4, 7};
    insertionSort(a, 7);
    inMang(a, 7);
}