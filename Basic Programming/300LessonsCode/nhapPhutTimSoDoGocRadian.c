#include <stdio.h>
#include <math.h>

int main()
{
    float soDoGoc;
    printf("Nhap so do goc don vi phut: ");
    scanf("%f", &soDoGoc);

    soDoGoc /= 60;
    printf("X thuoc goc phan tu thu %d\n", (int)(soDoGoc/90) % 4);
    printf("Cos(x) = %g\n", cos(soDoGoc*M_PI / 180));
}