#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    printf("Nhap 3 he so a, b, c: ");
    scanf("%f %f %f", &a,&b,&c);
    if(!a)
        if(!b) printf(!c ? "Vo so nghiem" : "Vo nghiem");
        else printf("x = %g", -c/b);
    else
    {
        float d = b*b - 4*a*c;
        if(d > 0) printf("x1 = %g \nx2 = %g", (-b + sqrt(d))/(2*a), (-b - sqrt(d))/(2*a));
        else (!d) ? printf("x1=x2 = %g", -b/(2*a)) : printf("Vo nghiem");
    }
}