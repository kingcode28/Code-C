#include <stdio.h>

int laSNT(int n)
{
    if(n == 2) return 1;
    if(n%2 == 0 || n == 1) return 0;
    for(int i = 3; i*i <= n; i += 2)
        if(n%i == 0) return 0;
    return 1;
}
void soKhongNguyenTo(int x)
{
    for(int i = 1; i <= x; i++)
        if(!laSNT(i)) printf("%d ", i);
}

int main()
{
    int n;
    printf("Nhap n: "); scanf("%d", &n);
    soKhongNguyenTo(n);
}