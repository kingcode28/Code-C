#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, cong=0;
    float p;
    printf("Nhap 3 canh cua tam giac: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a == b || b == c || c == a)
        cong += 1;
    if(a == b && b == c)
        cong += 1;
    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        cong += 3;
    switch (cong)
    {
        case 0: printf("Tam giac thuong\n"); break;
        case 1: printf("Tam giac can\n"); break;
        case 2: printf("Tam giac deu\n"); break;
        case 3: printf("Tam giac vuong\n"); break;
        case 4: printf("Tam giac vuong can\n"); break;
    }
    p = (a+b+c)/2.0;
    printf("Dien tich S = %g", sqrt(p * (p-a) * (p-b) * (p-c)));
}