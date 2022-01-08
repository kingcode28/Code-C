#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define length 10
void nhapMang(int a[]);
void xuatMang(int a[]);
int timXTrongMang(int a[], int x);
int main()
{
    int x;
    int a[length];
    nhapMang(a);
    xuatMang(a);
    while(1)
    {
        printf("\nNhap x: ");
        scanf("%d", &x);
        timXTrongMang(a, x);
        if(x == -1) break;
        else if(timXTrongMang(a, x) == 1)
            printf("Co %d trong mang", x);
        else
            printf("Khong co %d trong mang", x);
    }
}
void nhapMang(int a[])
{
    int i;
    srand(time(NULL));
    for(i=0; i<length; i++)
        // scanf("%d", &a[i]);
        a[i] = 1+rand()%9;
}
void xuatMang(int a[])
{
    int i;
    for(i=0; i<length; i++)
        printf("%5d", a[i]);
}
int timXTrongMang(int a[], int x)
{
    int i;
    for(i=0; i<length; i++)
        if(a[i] == x) return 1;
    return 0;
}