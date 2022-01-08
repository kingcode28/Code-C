#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
void mangC(int c[], int a[], int b[], int length);

int main()
{
    srand(time(NULL));
    int a[10], b[6], c[8];
    printf("Mang A\n");
    nhapMang(a, 10);
    inMang(a, 6);
    printf("\nMang B\n");
    nhapMang(b, 4);
    inMang(b, 6);
    printf("\nMang C\n");
    mangC(c, a, b, 7);
    inMang(c, 5);
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
        printf("%3d", a[i]);
}
void mangC(int c[], int a[], int b[], int length)
{
    int i;
    for(i=0; i<length; i++)
        c[i] = a[i] + b[i];
}