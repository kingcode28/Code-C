#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define length 10
void nhapMang(int a[]);
int checkSoLanXuatHienCuaX(int a[], int x, int k);
int main()
{
    int k, x;
    int a[length];
    nhapMang(a);
    printf("\nNhap x, k: ");
    scanf("%d %d", &x,&k);
    if(checkSoLanXuatHienCuaX(a, x, k))
        printf("\nindex = %d", checkSoLanXuatHienCuaX(a, x, k));
    else
        printf("\n%d xuat hien khong du %d lan", x,k);
}

void nhapMang(int a[])
{
    int i;
    srand(time(NULL));
    for(i=0; i<length; i++)
    {
        a[i] = 1+rand()%10;
        printf("%d ", a[i]);
    }
}
int checkSoLanXuatHienCuaX(int a[], int x, int k)
{
    int i, dem=0;
    for(i=0; i<length; i++)
    {
        if(a[i] == x) dem++;
        if(dem == k) return i;
    }
    return 0;
}
