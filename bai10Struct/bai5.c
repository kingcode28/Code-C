#include <stdio.h>
#include <math.h>
struct TamGiac
{
    int a, b, c;
};

void nhap3Canh(struct TamGiac *abc);
float tinhDienTich(struct TamGiac abc);

int main()
{
    struct TamGiac mnp;
    nhap3Canh(&mnp);
    printf("Dien tich = %f\n", tinhDienTich(mnp));
    if(mnp.a == mnp.b || mnp.a == mnp.c || mnp.b == mnp.c)
        printf("La tam giac can");
    else printf("Khong phai tam giac can");
}

void nhap3Canh(struct TamGiac *abc)
{
    printf("Nhap canh a, b, c: ");
    scanf("%d %d %d", &abc->a, &abc->b, &abc->c);
}
float tinhDienTich(struct TamGiac abc)
{
    float p = (abc.a + abc.b + abc.c)/2;
    return sqrt(p * (p-abc.a) * (p-abc.b) * (p-abc.c));
}