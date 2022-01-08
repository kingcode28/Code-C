#include <stdio.h>

void nhapMang(int a[], int length);
void inMang(int a[], int length);
int kiemTraCoPhaiLaMangCon(int a[], int lengthA, int b[], int lengthB);

int main()
{
    int a[10], b[10];
    int lengthB = 3;
    nhapMang(a, 5);
    nhapMang(b, lengthB);
    printf("Mang A:");
    inMang(a, 5);
    printf("\nMang B:");
    inMang(b, lengthB);
    if(kiemTraCoPhaiLaMangCon(a, 5, b, lengthB) == lengthB)
        printf("\nLa mang con");
    else
        printf("\nKhong phai la mang con");
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
int kiemTraCoPhaiLaMangCon(int a[], int lengthA, int b[], int lengthB)
{
    int i, j, dem=0;
    for(i=0, j=0; i<lengthA; i++)
    {
        if(a[i] == b[j])
        {
            j++; dem++;
            if(dem == lengthB) return dem;
        }
        else
        {
            j = 0;
            dem = 0;
        }
    }
    return dem;
}
