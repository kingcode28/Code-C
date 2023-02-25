#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LENGTH 100
// const int LENGTH = 100;

typedef struct {
    char hoTen[30];
    int namSinh;
    float dtb;
} SinhVien;

typedef struct {
    SinhVien sv[LENGTH];
    int soSV;
} DSSV;

int menu();
void chayChuongTrinh();
void nhapSV(SinhVien *sv);
void nhapCacSV(DSSV *ds, int n);
void inSV(SinhVien *sv);
void inCacSV(DSSV *ds);
void khoiTri(DSSV *ds);
int soSinhVienCoDTBLa(DSSV *ds, float diem);
int timSinhVienCoHoTen(DSSV *ds, char *ht);
void xoaSinhVienTaiViTri(DSSV *ds, int x);
void taoDanhSachCoDiemTu(DSSV *ds, DSSV *dsMoi, int diem);
void sapGiamTheoDTB(DSSV *ds);
int themSinhVienTheoDiem(DSSV *ds, SinhVien *sv);
void chen2DSSV(DSSV *ds1, DSSV *ds2, int viTri);
void ghep2DSSVGiamTheoDTB(DSSV *ds1, DSSV *ds2, DSSV *ds3);
int soSinhVienCoNamSinhLa(DSSV *ds, int namSinh);
void docTep(DSSV *ds);

int main()
{
    chayChuongTrinh();
    
    return 0;
}

int menu()
{
    system("cls");
    printf("1. Nhap n sinh vien\n");
    printf("2. In danh sach sinh vien\n");
    printf("3. Dem sinh vien co dtb = x\n");
    printf("4. Xoa sinh vien co ho ten x\n");
    printf("5. Tao danh sanh chua sinh vien theo dtb = x\n");
    printf("6. Them sinh vien vao danh sach theo dtb sap giam\n");
    printf("7. Chen DSSV2 vao DSSV1 tai vi tri x\n");
    printf("8. Ghep 2dssv da sap giam theo dtb vao sv moi sap giam theo dtb\n");
    printf("9. Dem so sinh vien co nam sinh = x\n");
    printf("10. Doc danh sach sinh vien tu tep\n");
    printf("Nhap 0 de thoat chuong trinh\n");
    int chon;
    printf("Moi ban nhap: "); 
    scanf("%d", &chon);
    return chon;
}
void chayChuongTrinh()
{
    DSSV ds;
    int chon;
    do
    {
        chon = menu();
        switch(chon)
        {
            case 0: break;
            case 1:
            {
                int n;
                printf("So sinh vien muon nhap: "); scanf("%d", &n);
                nhapCacSV(&ds, n);
                break;
            }
            case 2:
            {
                inCacSV(&ds);
                break;
            }
            case 3:
            {
                float diem;
                printf("Nhap dtb: "); scanf("%f", &diem);
                printf("Co %d sinh vien co dtb = %f\n", soSinhVienCoDTBLa(&ds, diem), diem);
                break;
            }
            case 4:
            {
                char ht[30];
                fflush(stdin);
                printf("Nhap ho ten sv van xoa: "); gets(ht);
                int vt = timSinhVienCoHoTen(&ds, ht);
                if(vt != -1)
                {
                    xoaSinhVienTaiViTri(&ds, vt);
                    printf("Xoa thanh cong. In danh sach de kiem tra.\n");
                }
                else
                    printf("Khong co sinh vien co ho ten la: %s\n", ht);
                break;
            }
            case 5:
            {
                float diem;
                DSSV dsMoi;
                printf("Nhap diem: ");
                scanf("%f", &diem);
                taoDanhSachCoDiemTu(&ds, &dsMoi, diem);
                inCacSV(&dsMoi);
                break;
            }
            case 6:
            {
                
                break;
            }
            case 7:
            {
                DSSV ds2;
                int x;
                printf("Nhap vi tri x: ");
                scanf("%d", &x);
                chen2DSSV(&ds, &ds2, x);
                break;
            }
            case 8:
            {
                
                break;
            }
            case 9:
            {
                int ns;
                printf("Nhap nam sinh: ");
                scanf("%d", &ns);
                printf("Co %d sinh vien co nam sinh = %d\n", soSinhVienCoNamSinhLa(&ds, ns), ns);
                break;
            }
            default:
                printf("Nhap sai! Vui long nhap tu 1-9\n");
        }
        system("pause");
    } while (chon != 0);
}
void nhapSV(SinhVien *sv)
{
    fflush(stdin);
    printf("Nhap ho ten: "); gets(sv->hoTen);
    printf("Nhap nam sinh: "); scanf("%d", &sv->namSinh);
    printf("Nhap dtb: "); scanf("%f", &sv->dtb);
}
void nhapCacSV(DSSV *ds, int n)
{
    SinhVien s;
    for(int i = 0; i < n; i++)
    {
        nhapSV(&s);
        ds->sv[i] = s;
    }
    ds->soSV = n;
}
void inSV(SinhVien *sv)
{
    printf("%-30s%-10d%-10f\n", sv->hoTen, sv->namSinh, sv->dtb);
}
void inCacSV(DSSV *ds)
{
    printf("-----Danh sach sinh vien-----\n");
    printf("%-30s%-10s%-10s\n", "Ho va ten", "Nam sinh", "DTB");
    for(int i = 0; i < ds->soSV; i++) 
        inSV(&ds->sv[i]);
}
void khoiTri(DSSV *ds)
{
    ds->soSV = 0;
}
int soSinhVienCoDTBLa(DSSV *ds, float diem)
{
    int count = 0;
    for(int i = 0; i < ds->soSV; i++)
        if(ds->sv[i].dtb == diem)
            count++;
    return count;
}
int timSinhVienCoHoTen(DSSV *ds, char *ht)
{
    for(int i = 0; i < ds->soSV; i++)
        if(strcmp(ds->sv[i].hoTen, ht) == 0)
            return i;
    return -1;
}
void xoaSinhVienTaiViTri(DSSV *ds, int x)
{
    for(int i = x; i < ds->soSV-1; i++)
        ds->sv[i] = ds->sv[i+1];
    ds->soSV -= 1;
}
void taoDanhSachCoDiemTu(DSSV *ds, DSSV *dsMoi, int diem)
{
    dsMoi->soSV = 0;
    for(int i = 0; i < ds->soSV; i++)
    {
        if(ds->sv[i].dtb >= diem)
        {
            dsMoi->sv[dsMoi->soSV] = ds->sv[i];
            dsMoi->soSV += 1;
        }
    }
}
void sapGiamTheoDTB(DSSV *ds)
{
    int i, j;
    for(i = 0; i < ds->soSV-1; i++)
    {
        for(j = i+1; j < ds->soSV; j++)
        {
            if(ds->sv[i].dtb > ds->sv[j].dtb)
            {
                SinhVien tmp = ds->sv[i];
                ds->sv[i] = ds->sv[j];
                ds->sv[j] = tmp;
            }
        }
    }
}
/* int themSinhVienTheoDiem(DSSV *ds, int *n) */
/* { */

/* } */
void chen2DSSV(DSSV *ds1, DSSV *ds2, int viTri)
{
    int j = 0;
    for(int i = ds1->soSV-1; i >= viTri; i--)
        ds1->sv[i+ds2->soSV] = ds1->sv[i];
    for(int i = viTri; j < ds2->soSV; i++, j++)
        ds1->sv[i] = ds2->sv[j];
    ds1->soSV += ds2->soSV;
}
void ghep2DSSVGiamTheoDTB(DSSV *ds1, DSSV *ds2, DSSV *ds3)
{
    int i, j, k = 0;
    while(1)
    {
        if(ds1->sv[i].dtb > ds2->sv[j].dtb)
        {
            ds3->sv[k] = ds2->sv[j];
            j++;
        }       
        else {
            ds3->sv[k] = ds1->sv[i];
            i++;
        }
        k++;
        if(i == ds1->soSV || j == ds2->soSV) break;
    }
    for(; i < ds1->soSV; i++, k++)
        ds3->sv[k] = ds1->sv[i];
    for(; j < ds2->soSV; j++, k++)
        ds3->sv[k] = ds2->sv[j];
}
int soSinhVienCoNamSinhLa(DSSV *ds, int namSinh)
{
    int count = 0;
    for(int i = 0; i < ds->soSV; i++)
        if(ds->sv[i].namSinh == namSinh)
            count++;
    return count;
}
void docTep(DSSV *ds)
{
    FILE *f;
    f = fopen("D:\\Code-C\\Cấu trúc dữ liệu", "r");
    if(f == EOF)
    {
        printf("Loi doc tep");
        exit(0);
    }
    
}