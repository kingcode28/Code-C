#include <stdio.h>

struct TienDien
{
    char tenKH[30];
    int chiSoCu, chiSoMoi;
};
void nhapThongTin(struct TienDien *user)
{
    printf("Nhap ten KH: "); gets(user->tenKH);
    printf("Nhap chi so cu: "); scanf("%d", &user->chiSoCu);
    printf("Nhap chi so moi: "); scanf("%d", &user->chiSoMoi);
}
int tinhTienDien(struct TienDien user)
{
    int soDien = user.chiSoMoi - user.chiSoCu;
    return soDien <= 100 ? soDien*1000 : soDien*1000 + (soDien-100)*1200;
}

int main()
{
    struct TienDien person;
    nhapThongTin(&person);
    printf("So tien phai tra: %d", tinhTienDien(person));
}