#include <stdio.h>

struct HCN
{
    int dai, rong;
};

void nhapDoDai(struct HCN *a);
int tinhDienTich(struct HCN s);
float tinhChuVi(struct HCN s);

int main()
{
    struct HCN abcd;
    nhapDoDai(&abcd);
    printf("Dien tich = %d\n", tinhDienTich(abcd));
    printf("Chu vi = %f\n", tinhChuVi(abcd));
    if(abcd.dai == abcd.rong) printf("La hinh vuong");
    else printf("Khong la hinh vuong");
}

void nhapDoDai(struct HCN *a)
{
    printf("Nhap chieu dai: "); scanf("%d", &a->dai);
    printf("Nhap chieu rong: "); scanf("%d", &a->rong);
}
int tinhDienTich(struct HCN s)
{
    return  s.dai * s.rong;
}
float tinhChuVi(struct HCN s)
{
    return (s.dai*2 + s.rong*2)/2.0;
}