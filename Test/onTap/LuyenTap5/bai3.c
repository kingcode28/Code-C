#include <stdio.h>
#include <string.h>

struct SinhVien
{
    int MSV;
    char hoTen[50];
    float diemToan, diemLy;
};
void nhapSinhVien(struct SinhVien *sv)
{
    printf("Nhap MSV: "); scanf("%d", &sv->MSV); fflush(stdin);
    printf("Nhap ten SV: "); gets(sv->hoTen);
    printf("Nhap diem toan: "); scanf("%f", &sv->diemToan);
    printf("Nhap diem ly: "); scanf("%f", &sv->diemLy);
}
float diemTrungBinh(struct SinhVien sv)
{
    return (sv.diemToan + sv.diemLy) / 2;
}
void inSV(struct SinhVien sv)
{
    printf("MSV: %d\n", sv.MSV);
    printf("Ho ten SV: %s\n"); gets(sv.hoTen);
    printf("Diem toan: %g\n", sv.diemToan);
    printf("Diem ly: %f\n", sv.diemLy);
    printf("DTB: %g\n", diemTrungBinh(sv));
}

int main()
{
    struct SinhVien sv;
    nhapSinhVien(&sv);
    inSV(sv);
}