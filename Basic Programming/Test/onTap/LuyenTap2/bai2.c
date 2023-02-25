#include <stdio.h>

struct Lop
{
    char tenLop[20];
    int soSinhVien;
};
void nhapLop(struct Lop *lop)
{
    printf("Nhap ten lop: "); gets(lop->tenLop);
    printf("Nhap so SV cua lop: "); scanf("%d", &lop->soSinhVien);
    fflush(stdin);
}

int main()
{
    struct Lop lop1, lop2;
    nhapLop(&lop1); nhapLop(&lop2);
    if(lop1.soSinhVien > lop2.soSinhVien)
        printf("Lop 1 nhieu SV hon");
    else if(lop1.soSinhVien < lop2.soSinhVien)
        printf("Lop 2 nhieu SV hon");
    else printf("Hai lop co so SV bang nhau");
}