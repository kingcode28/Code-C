#include <stdio.h>
#include <math.h>

struct TamGiac
{
    int a, b, c;
};
void nhapTamGiac(struct TamGiac *abc)
{
    printf("Nhap 3 canh cua tam giac: ");
    scanf("%d %d %d", &abc->a, &abc->b, &abc->c);
}
float tinhDienTich(struct TamGiac abc)
{
    float p = (abc.a + abc.b + abc.c)/2.0;
    return sqrt(p * (p-abc.a) * (p-abc.b) * (p-abc.c));
}

int main()
{
    struct TamGiac abc;
    nhapTamGiac(&abc);
    printf("Dien tich tam giac: %g", tinhDienTich(abc));
}