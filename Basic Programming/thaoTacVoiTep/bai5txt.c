#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct SinhVien
{
    char hoTen[50];
    int namSinh;
    float dtb;
};
void nhapSV( struct SinhVien *sv )
{
    printf("Nhap ho ten: "); gets(sv->hoTen);
    printf("Nhap nam sinh: "); scanf("%d", &sv->namSinh);
    printf("Nhap DTB: "); scanf("%f", &sv->dtb);
    fflush(stdin);
}
void inSV( struct SinhVien sv )
{
    printf("Ho ten: %s\n", sv.hoTen);
    printf("Nam sinh: %d\n", sv.namSinh);
    printf("DTB = %.2f\n", sv.dtb);
}
void ghiTep( struct SinhVien sv1, struct SinhVien sv2 )
{
    FILE *f;
    f = fopen( "D:\\Data\\Bai11KieuTep\\sinhvien.txt", "w" );
    fprintf(f, "%s, %d, %f\n", sv1.hoTen, sv1.namSinh, sv1.dtb);
    fprintf(f, "%s, %d, %f\n", sv2.hoTen, sv2.namSinh, sv2.dtb);
    fclose( f );
}
void docTep( struct SinhVien sv1, struct SinhVien sv2 )
{
    int kq;
    FILE *f;
    f = fopen( "D:\\Data\\Bai11KieuTep\\sinhvien.txt", "r" );
    kq = fscanf(f, "%d %f", &sv1.namSinh, &sv1.dtb);
    printf("%d", kq);    
    kq = fscanf(f, "%d %f", &sv2.namSinh, &sv2.dtb);
    printf("%d", kq);    
    fclose( f );
}

int main()
{
    struct SinhVien sv1, sv2, s1, s2;
    nhapSV(&sv1); nhapSV(&sv2);
    system("cls");
    ghiTep(sv1, sv2);
    docTep(s1, s2);
    inSV(s1); inSV(s2);
}