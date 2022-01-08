#include <stdio.h>

int main()
{
    float a, b;
    printf("Nhap he so a, b: ");
    scanf("%d %d", &a,&b);
    // Cách 1
    if(!a)
    {
        if(!b)
            printf("Vo so nghiem");
        else
            printf("Vo nghiem");
    }
    else
        printf("x = %g", -b/a);

    // Cách 2
    if(!a)
        printf(!b ? "Vo so nghiem" : "Vo nghiem");
    else
        printf("x = %g", -b/a);

    // Cách 3
    !a &&(!b && printf("Vo so nghiem") || printf("Vo nghiem")) || printf("x = %g", -b/a);
}