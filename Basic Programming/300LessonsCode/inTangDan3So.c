#include <stdio.h>

#define swap(a, b) {int t=a; a=b; b=t;}

int main()
{
    int a, b, c;
    printf("Nhap 3 so nguyen: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b) swap(a, b);
    if(a>c) swap(a, c);
    if(b>c) swap(b, c);
    printf("%d, %d, %d", a,b,c);
}