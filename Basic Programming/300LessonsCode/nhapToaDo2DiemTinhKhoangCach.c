#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    float khoangCach;
    printf("Nhap toa do diem 1: ");
    scanf("%d %d", &x1,&y1);
    printf("Nhap toa do diem 2: ");
    scanf("%d %d", &x2,&y2);
    khoangCach = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
    printf("Khoang cach cua hai diem la: %f", khoangCach);
}