#include <stdio.h>
#include <math.h>

const float PI = 3.14;

float theTich(float banKinh);
int main()
{
    float dienTich, banKinh;
    printf("Nhap vao dien tich cua mat cau: ");
    scanf("%f", &dienTich);
    banKinh = sqrt(dienTich / (4*PI));
    printf("The tich cua hinh cau = %f", theTich(banKinh));
}

float theTich(float banKinh)
{
    float theTich;
    theTich = 4/3.0*3.14*pow(banKinh, 3);
    return theTich;
}