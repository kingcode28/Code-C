#include <stdio.h>
#include <math.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int checkSCP(int n);
int locRaCacSCP(int a[], int b[], int length);

int main()
{
    int a[10], b[10];
    nhapMang(a, 10);
    printf("Mang ban dau\n");
    inMang(a, 10);
    printf("\nMang chua cac so chinh phuong\n");
    inMang(b, locRaCacSCP(a, b, 10));
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
int checkSCP(int n)
{
    int can2 = sqrt(n);
    if(can2*can2 == n) return 1;
    return 0;
}
int locRaCacSCP(int a[], int b[], int length)
{
    int i, j, dem=0;
    for(i=0, j=0; i<length; i++)
    {
        if(checkSCP(a[i]))
        {
            b[j] = a[i];
            j++; dem++;
        }
    }
    return dem;
}