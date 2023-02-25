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

int main()
{
    struct SinhVien sv1, sv2, s1, s2;
    char hoTen[50]; int p;
    nhapSV(&sv1); nhapSV(&sv2);
    system("cls");
    FILE *f;
    f = fopen("D:\\Data\\Bai11KieuTep\\sinhvien.dat", "wb");
    // Ghi tệp
    fwrite(&sv1, 1, sizeof(struct SinhVien), f);
    fwrite(&sv2, 1, sizeof(struct SinhVien), f);
    fclose(f);
    // Đọc tệp
    f = fopen("D:\\Data\\Bai11KieuTep\\sinhvien.dat", "rb");
    fread(&s1, 1, sizeof(struct SinhVien), f);
    fread(&s2, 1, sizeof(struct SinhVien), f);
    fclose(f);
    inSV(s1); inSV(s2);

    // Tìm kiếm sinh viên
    fflush(stdin);
    printf("Nhap ten sv can tim: ");
    gets(hoTen);
    f = fopen("D:\\Data\\Bai11KieuTep\\sinhvien.dat", "rb");
    do
    {
        p = fread(&s1, 1, sizeof(struct SinhVien), f);
        if(p != EOF && strstr(s1.hoTen, hoTen) != NULL)
        {
            inSV(s1);
            break;
        }
    } while (p != EOF);
    fclose(f);
}