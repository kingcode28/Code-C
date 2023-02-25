#include <stdio.h>
#include <math.h>

int main()
{
    int xA, yA, xB, yB, xC, yC, xM, yM;
    float dienTichABC, dienTichMAB, dienTichMAC, dienTichMBC;
    printf("Nhap toa do diem A(xA, yA), B(xB, yB), C(xC, yC) ");
    scanf("%d %d %d %d %d %d", &xA,&yA, &xB,&yB, &xC,&yC);
    printf("Nhap toa do diem M(xM, yM) ");
    scanf("%d %d", &xM,&yM);
    dienTichABC = abs(xA*yB - xB*yA + xB*yC - xC*yB + xC*yA - xA*yC)*0.5;
    dienTichMAB = abs(xA*yB - xB*yA + xB*yM - xM*yB + xM*yA - xA*yM)*0.5;
    dienTichMAC = abs(xA*yM - xM*yA + xM*yC - xC*yM + xC*yA - xA*yC)*0.5;
    dienTichMBC = abs(xM*yB - xB*yM + xB*yC - xC*yB + xC*yM - xM*yC)*0.5;
    if(dienTichMAB + dienTichMAC + dienTichMBC > dienTichABC)
        printf("Diem M nam ngoai tam giac");
    else
    {
        if(dienTichMAB + dienTichMAC == dienTichABC || dienTichMAB + dienTichMBC == dienTichABC || dienTichMBC + dienTichMAC == dienTichABC)
            printf("Diem M nam tren tam giac");
        else
            printf("Diem M nam trong tam giac");
    }
}
#include <stdio.h>
#include <math.h>

float dienTich(int xA, int yA, int xB, int yB, int xC, int yC)
{
    return fabs(xA*yB - xB*yA + xB*yC - xC*yB + xC*yA - xA*yC)*0.5;
}
int main()
{
    int xA, yA, xB, yB, xC, yC, xM, yM;
    float tong;
    printf("Nhap toa do diem A(xA, yA), B(xB, yB), C(xC, yC) ");
    scanf("%d %d %d %d %d %d", &xA,&yA, &xB,&yB, &xC,&yC);
    printf("Nhap toa do diem M(xM, yM) ");
    scanf("%d %d", &xM,&yM);
    tong = dienTich(xM, yM, xB, yB, xC, yC) + dienTich(xA, yA, xM, yM, xC, yC)
     + dienTich(xA, yA, xB, yB, xM, yM) - dienTich(xA, yA, xB, yB, xC, yC);
    if(tong > 0)
        printf("Diem M nam ngoai tam giac");
    else
    {
        if(dienTich(xM, yM, xB, yB, xC, yC) || dienTich(xA, yA, xM, yM, xC, yC) || dienTich(xA, yA, xB, yB, xM, yM))
            printf("Diem M nam tren tam giac");
        else
            printf("Diem M nam trong tam giac");
    }
}