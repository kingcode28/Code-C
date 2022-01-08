#include <stdio.h>
#include <math.h>

#define swap(a, b) {int t=a; a=b; b=t;}

int main()
{
    int a, b, c;
    float p;
    printf("Nhap do dai ba canh cua tam giac: ");
    scanf("%d %d %d", &a,&b,&c);
    // Sắp xếp a <= b <= c
    if(a > b) swap(a, b);
    if(a > c) swap(a, c);
    if(b > c) swap(b, c);
    if(a == c) printf("Tam giac deu\n");
    else if ((c+a)*(c-a) == b*b)
        if(a == b || b == c) printf("Tam giac vuong can\n");
        else printf("Tam giac vuong\n");
    else
        if(a == b || b == c) printf("Tam giac can\n");
        else printf("Tam giac thuong\n");
    p = (a+b+c)/2;
    printf("Dien tich S = %g", sqrt(p*(p-a)*(p-b)*(p-c)));
}