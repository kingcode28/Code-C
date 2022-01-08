#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int checkSNT(int n);
int kiemTraSNTLonNhat(int a[], int length);

int main()
{
    srand(time(NULL));
    int a[20];
    nhapMang(a, 15);
    inMang(a, 15);
    printf(kiemTraSNTLonNhat(a, 15) ? "\n%d" : "\nKhong co SNT", kiemTraSNTLonNhat(a, 15));
}

void nhapMang(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        a[i] = 1+rand()%20;
}
void inMang(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        printf("%5d", a[i]);
}
int checkSNT(int n)
{
    int i;
    if(n < 2) return 0;
    else
    {
        if(n == 2) return 1;
        if(n%2 == 0) return 0;
        for(i=3; i*i < n; i+=2)
            if(n%i == 0) return 0;
        return 1;
    }
}
int kiemTraSNTLonNhat(int a[], int length)
{
    int i, maxSNT=0;
    for(i=0; i<length; i++)
        if(checkSNT(a[i]))
            if(a[i] > maxSNT) maxSNT = a[i];
    return maxSNT;
}