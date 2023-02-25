#include <stdio.h>
#include <string.h>

typedef struct {
    char hoTen[30];
    int namSinh;
    double dtb;
} SinhVien;

void nhapSV(SinhVien *sv);
void inSV(SinhVien sv);
void nhapDSSV(SinhVien ds[], int n);
void inDSSV(SinhVien ds[], int n);
int timSV(SinhVien ds[], int n, char *hoTen);
void lietKeSVDiemLonHonBang8(SinhVien ds[], int n);
void themSV(SinhVien ds[], int n, SinhVien sv);
int demSVTrungHo(SinhVien ds[], int n, char *ho);
void sapDSTheoHoTen(SinhVien ds[], int n);

int main()
{
    
    return 0;
}

void nhapSV(SinhVien *sv)
{
    fflush(stdin);
    printf("Nhap ho ten: "); gets(sv->hoTen);
    printf("Nhap nam sinh: "); scanf("%d", &sv->namSinh);
    printf("Nhap dtb: "); scanf("%lf", &sv->dtb);
}

void inSV(SinhVien sv)
{
    printf("%-30s %-10d %-7lf\n", sv.hoTen, sv.namSinh, sv.dtb);
}

void nhapDSSV(SinhVien ds[], int n)
{
    for(int i = 0; i < n; i++)
    {
        nhapSV(&ds[i]);
    }
}

void inDSSV(SinhVien ds[], int n)
{
    printf("-----Danh Sach Sinh Vien-----\n");
    printf("%-30s %-10s %-7s\n", "Ho va Ten", "Nam Sinh", "DTB");
    for(int i = 0; i < n; i++)
    {
        inSV(ds[i]);
    }
}
int timSV(SinhVien ds[], int n, char *hoTen)
{
    for(int i = 0; i < n; i++)
    {
        if(strcmp(ds[i].hoTen, hoTen) == 0)
        {
            return i;
        }
    }
    return -1;
}
void lietKeSVDiemLonHonBang8(SinhVien ds[], int n)
{
    int dem = 0;
    printf("---Cac sinh vien co diem trung binh >= 8---\n");
    printf("%-30s %-10s %-7s\n", "Ho va Ten", "Nam Sinh", "DTB");
    for(int i = 0; i < n; i++)
    {
        if(ds[i].dtb >= 8)
        {
            inSV(ds[i]);
            dem = 1;
        }
    }
    if(!dem)
    {
        printf("Khong co sinh vien nao co diem trung binh >= 8");
    }
}

void themSVVaoCuoiMang(SinhVien ds[], int *n, SinhVien sv)
{
    int length = sizeof(ds) / sizeof(ds[0]);
    if(length > *n)
    {
        ds[*n] = sv;
        n += 1;
    }
    else
    {
        printf("Do dai mang toi da khong the them sinh vien\n");
    }
}
int demSVTrungHo(SinhVien ds[], int n, char *ho)
{
    int dem;
    for(int i = 0; i < n; i++)
    {
        if(strstr(ds[i].hoTen, ho) != NULL)
        {
            dem++;
        }
    }
    return dem;
}
void sapDSTheoHoTen(SinhVien ds[], int n);
