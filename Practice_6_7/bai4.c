#include <stdio.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int checkSNT(int n);
int kiemTraMangCoToanSNT(int a[], int length);

int main()
{
    int a[10];
    nhapMang(a, 4);
    inMang(a, 4);
    printf(kiemTraMangCoToanSNT(a, 4) ? "\nMang toan SNT" : "\nMang khong toan SNT");
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
int checkSNT(int n)
{
    int j;
    if(n < 2) return 0;
    else
    {
        if(n == 2) return 1;
        if(n%2 == 0) return 0;
        for(j=3; j*j < n; j+=2)
            if(n%j == 0) return 0;
        return 1;
    }
}
int kiemTraMangCoToanSNT(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        if(!checkSNT(a[i])) return 0;
    return 1;
}