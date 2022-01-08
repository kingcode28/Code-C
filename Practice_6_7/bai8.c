#include <stdio.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int checkSNT(int n);

int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int a[n];
    nhapMang(a, n);
    inMang(a, n);
}

void nhapMang(int a[], int length)
{
    int i=0, so=2;
    if(so == 2) a[i] = so;
    for(i=1, so=3; i<length; )
    {
        if(checkSNT(so))
        {
            a[i] = so;
            if(i == length-1) break;
            i++;
        }
        so += 2;
    }
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
    if(n == 2) return 1;
    if(n%2 == 0) return 0;
    for(j=3; j*j < n; j+=2)
        if(n%j == 0) return 0;
    return 1;
}