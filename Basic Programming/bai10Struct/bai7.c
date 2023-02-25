#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAM 1
#define NU 0

struct Ngay
{
    int ngay, thang , nam;
};
struct SinhVien
{
    char hoTen[50];
    int gioiTinh;
    struct Ngay ngaySinh;
    float dtb;
};

void nhapNgaySinh(struct Ngay *p);
void nhapSV(struct SinhVien a[], int n);
void inSV(struct SinhVien a);
int tinhTuoi(struct Ngay p);
int timTuoiLN(struct SinhVien a[], int n);
int soNgay(struct Ngay user1, struct Ngay user2);
int soNgaySinh(struct SinhVien a1, struct SinhVien a2);
int timTuoiNN(struct SinhVien a[], int n);
float TBCong(struct SinhVien a[], int n);
int timSV(struct SinhVien a, char *s);
void tenDemHo(char *hoTen, char *tenDem);
int soTen(struct SinhVien a1, struct SinhVien a2);
int tenDauBangChuCai(struct SinhVien a[], int n);

int main()
{
    int i, n, kq, dem=0;
    char ten[40];

    // Câu a. Nhập số SV n
    printf("Nhap n sinh vien: "); scanf("%d", &n);
    struct SinhVien sv[n];
    nhapSV(sv, n);
    system("cls");

    // Câu b. In n số SV
    printf("-------Danh sach sinh vien-------\n");
    printf("%-25s%-15s%-15s%-15s\n", "Ho va ten", "Gioi tinh", "Ngay sinh", "DTB");
    for(i=0; i<n; i++)
        inSV(sv[i]);

    // Câu c. In SV có tuổi lớn nhất
    printf("\n-------Sinh vien co tuoi lon nhat-------\n");
    inSV(sv[timTuoiLN(sv, n)]);

    // Câu d. In SV có tuổi nhỏ nhất(theo ngày sinh)
    printf("\n-------Sinh vien co tuoi nho nhat-------\n");
    inSV(sv[timTuoiNN(sv, n)]);

    // Câu e. Tính trung bình cộng DTB
    printf("Trung binh cong DTB = %f\n", TBCong(sv, n));

    // Câu f. Tìm kiếm 1 SV
    fflush(stdin);
    printf("Nhap ten SV can tim: "); gets(ten);
    for(i=0; i<n; i++)
    {
        if(timSV(sv[i], ten) == 1)
        {
            inSV(sv[i]);
            dem++;
        }
    }
    if(!dem) printf("Khong co SV can tim\n");

    // Câu g. In SV đứng đầu nếu sắp sếp theo thứ tự tăng tiếng việt
    printf("SV dung dau theo bang chu cai\n");
    kq = tenDauBangChuCai(sv, n);
    inSV(sv[kq]);
}

void nhapNgaySinh(struct Ngay *p)                                                       // Câu a
{
    scanf("%d %d %d", &p->ngay, &p->thang, &p->nam);
}
void nhapSV(struct SinhVien a[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        fflush(stdin);
        printf("Nhap ho ten SV%d: ", i+1); gets(a[i].hoTen);
        printf("Nhap gioi tinh 0(nu), 1(nam): "); scanf("%d", &a[i].gioiTinh);
        printf("Nhap ngay sinh(ngay thang nam): "); nhapNgaySinh(&a[i].ngaySinh);
        printf("DTB: "); scanf("%f", &a[i].dtb);
    }
}
void inSV(struct SinhVien a)                                                            // Câu b
{
    printf("%-25s", a.hoTen);
    printf("%-15s", a.gioiTinh ? "Nam" : "Nu");
    printf("%02d/%02d/%-9d", a.ngaySinh.ngay, a.ngaySinh.thang, a.ngaySinh.nam);
    printf("%-15.2f\n", a.dtb);
}
int tinhTuoi(struct Ngay p)                                                             // Câu c
{
    return 2021 - p.nam;
}
int timTuoiLN(struct SinhVien a[], int n)
{
    int i, max, maxI;
    max = tinhTuoi(a[0].ngaySinh);
    maxI = 0;
    for(i=1; i<n; i++)
    {
        if(tinhTuoi(a[i].ngaySinh) > max)
        {
            max = tinhTuoi(a[i].ngaySinh);
            maxI = i;
        }
    }
    return maxI;
}
int soNgay(struct Ngay user1, struct Ngay user2)                                        // Câu d
{
    if(user1.nam != user2.nam)
        return user1.nam - user2.nam;
    else if(user1.thang != user2.thang)
        return user1.thang - user2.thang;
    else if(user1.ngay != user2.ngay)
        return user1.ngay - user2.ngay;
    else return 0;
}
int soNgaySinh(struct SinhVien a1, struct SinhVien a2)
{
    return soNgay(a1.ngaySinh, a2.ngaySinh);
}
int timTuoiNN(struct SinhVien a[], int n)
{
    int i, minI;
    minI = 0;
    for(i=1; i<n; i++)
        if(soNgaySinh(a[minI], a[i]) < 0)
            minI = i;
    return minI;
}
float TBCong(struct SinhVien a[], int n)                                                // Câu e
{
    int i;
    float tong=0;
    for(i=0; i<n; i++)
        tong += a[i].dtb;
    return tong/n;
}
int timSV(struct SinhVien a, char *s)                                                   // Câu f
{
    char *ptr;
    ptr = strstr(a.hoTen, s);
    if(ptr != NULL) return 1;
    return -1;
}
void tenDemHo(char *hoTen, char *tenDem)                                                // Câu g
{
	int i, j, n; char *p;
	n = strlen(hoTen);
	p = strstr(hoTen, " ");
	j = p - hoTen;
	i = n-1;
	while (i>=0 && hoTen[i]!=' ') i--;
	strcpy(tenDem, hoTen + i + 1);
	strncpy(tenDem + n - i - 1, p, i - j + 1);
	strncpy(tenDem + n - j, hoTen, i);
	tenDem[n]='\0';
}
int soTen(struct SinhVien a1, struct SinhVien a2)
{
    char tenDem1[50], tenDem2[50];
    tenDemHo(a1.hoTen, tenDem1);
    tenDemHo(a2.hoTen, tenDem2);
    return strcmp(tenDem1, tenDem2);
}
int tenDauBangChuCai(struct SinhVien a[], int n)
{
    int i, minI;
    minI = 0;
    for(i=1; i<n; i++)
        if(soTen(a[minI], a[i]) > 0)
                minI = i;
    return minI;
}