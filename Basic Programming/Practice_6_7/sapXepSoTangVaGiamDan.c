#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define length 10
#define swap(a, b) {int t=a; a=b; b=t;}

void nhapMang(int a[]);
void sapXepSoTangDan(int a[]);
void sapXepSoGiamDan(int a[]);
void inMang(int a[]);
int main()
{
    int x[length];
    printf("Mang truoc khi sap xep\n");
    nhapMang(x);
    inMang(x);
    printf("\nMang sau khi sap xep tang dan\n");
    sapXepSoTangDan(x);
    inMang(x);
    printf("\nMang sau khi sap xep giam dan\n");
    sapXepSoGiamDan(x);
}
void nhapMang(int a[])
{
    int i;
    srand(time(NULL));
    for(i=0; i<length; i++)
        a[i] = 1+rand()%10;
}
void sapXepSoTangDan(int a[])
{
    int i, j;
    for(i=0; i< length-1; i++) 
        for(j= i+1; j<length; j++)
            if(a[i] > a[j]) swap(a[i], a[j]);
}
void sapXepSoGiamDan(int a[])
{
    int i;
    for(i=length-1; i>=0; i--) 
        printf("%5d", a[i]);
}
void inMang(int a[])
{
    int i;
    for(i=0; i<length; i++)
        printf("%5d", a[i]);
}