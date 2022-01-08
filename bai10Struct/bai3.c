#include <stdio.h>
#include <string.h>

struct TienDien
{
    int chiSoCu, chiSoMoi;
};

void nhapChiSoDien(struct TienDien *s);
float tinhTien(struct TienDien s);

int main()
{
    struct TienDien a;
    nhapChiSoDien(&a);
    printf("So tien phai tra: %fVND", tinhTien(a));
}

void nhapChiSoDien(struct TienDien *s)
{
    printf("Nhap chi so cu: "); scanf("%f", &s->chiSoCu);
    printf("Nhap chi so moi: "); scanf("%f", &s->chiSoMoi);
}
float tinhTien(struct TienDien s)
{
    int soDien;
    soDien = s.chiSoMoi - s.chiSoCu;
    if(soDien <= 100)
        return soDien*1000;
    else
        return 100*1000 + (soDien - 100)*1500;
}


