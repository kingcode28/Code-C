#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int kiemTraSoGanNhatVoiX(int a[], int length, int n);

int main()
{
    srand(time(NULL));
    int x;
    int a[15];
    nhapMang(a, 10);
    inMang(a, 10);
    printf("\nNhap x: ");
    scanf("%d", &x);
    printf("a[%d]", kiemTraSoGanNhatVoiX(a, 10, x));
}

void nhapMang(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        a[i] = 1+rand()%10;
}
void inMang(int a[], int length)
{
    int i;
    for(i=0; i<length; i++)
        printf("%5d", a[i]);
}
int kiemTraSoGanNhatVoiX(int a[], int length, int n)
{
    int i, minI, hieuMin;
    minI = 0;
    hieuMin = abs(a[0] - n);
    for(i=1; i<length; i++)
    {
        if(abs(a[i] - n) < hieuMin)
        {
            hieuMin = abs(a[i] - n);
            minI = i;
        }
    }
    return minI;
}