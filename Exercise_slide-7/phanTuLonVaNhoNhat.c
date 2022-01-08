#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define length 10
#define swap(a, b) {int t=a; a=b; b=t;}

void nhapMang(int a[]);
void sapXepTangDan(int a[]);

int main()
{
    int a[length];
    nhapMang(a);
    sapXepTangDan(a);
    printf("\nPhan tu lon nhat %d", a[length-1]);
    printf("\nPhan tu nho nhat %d", a[0]);
    
}

void nhapMang(int a[])
{
    int i;
    srand(time(NULL));
    for(i=0; i<length; i++)
    {
        a[i] = 1+rand()%10;
        printf("%5d", a[i]);
    }
}
void sapXepTangDan(int a[])
{
    int i, j;
    for(i=0; i<length; i++)
        for(j= i+1; j<length; j++)
            if(a[i] > a[j])
                swap(a[i], a[j]);
}
