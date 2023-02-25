#include <stdio.h>
#include <string.h>

struct SinhVien
{
    char hoTen[50];
    int namSinh;
    float dtb;
};

void nhapSV(struct SinhVien *s);
void inSV(struct SinhVien s);

int main()
{
    struct SinhVien sv1, sv2;
    nhapSV(&sv1); nhapSV(&sv2);
    if(sv1.namSinh <= sv2.namSinh) inSV(sv1);
    else inSV(sv2);
}

void nhapSV(struct SinhVien *s)
{
    printf("Nhap ho ten SV: "); gets(s->hoTen);
    printf("Nhap nam sinh: "); scanf("%d", &s->namSinh);
    printf("Nhap DTB: "); scanf("%f", &s->dtb);
    fflush(stdin);
}
void inSV(struct SinhVien s)
{
    printf("Ho va ten: %s\n", s.hoTen);
    printf("Tuoi: %d\n", s.namSinh);
    printf("DTB = %f\n", s.dtb);
}



