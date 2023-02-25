#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define length 10

void nhapVaInMang(int a[]);

int main()
{
    int x;
    int a[length];
    nhapVaInMang(a);
    printf("Nhap x: ");
    scanf("%d", &x);
    
}

void nhapVaInMang(int a[])
{
    int i;
    srand(time(NULL));
    for(i=0; i<length; i++)
    {
        a[i] = 1+rand()%10;
        printf("%5d", a[i]);
    }
}