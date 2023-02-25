#include <stdio.h>
#include <string.h>

#define NAM 1
#define NU 0

struct Ngay
{
    int ngay, thang, nam;
};
struct SinhVien
{
    char hoTen[50];
    int gioiTinh;
    struct Ngay ngaySinh;
    float dtb;
};

void nhapSV(struct SinhVien *sv);
void nhapNgaySinh(struct Ngay *ptr);
void inSV(struct SinhVien sv);
int tinhTuoi(struct SinhVien sv);
int soNgay(struct Ngay user1, struct Ngay user2);
int soNgaySinh(struct SinhVien sv1, struct SinhVien sv2);

int main()
{
    struct SinhVien sv1, sv2;
    nhapSV(&sv1); nhapSV(&sv2);
    inSV(sv1); inSV(sv2);
    printf("Tuoi sv1 = %d\n", tinhTuoi(sv1));
    printf("Tuoi sv2 = %d\n", tinhTuoi(sv2));
    int ketQua = soNgaySinh(sv1, sv2);
    if(ketQua > 0)
        printf("Sinh vien 2 lon hon");
    else if(ketQua < 0)
        printf("Sinh vien 1 lon hon");
    else 
        printf("Hai sinh vien bang tuoi");
}

void nhapSV(struct SinhVien *sv)
{
    printf("Nhap ho ten: "); gets(sv->hoTen);
    printf("Nhap gioi tinh 0(nu), 1(nam); "); scanf("%d", &sv->gioiTinh);
    printf("Nhap ngay sinh: "); nhapNgaySinh(&sv->ngaySinh);
    printf("Nhap DTB: "); scanf("%f", &sv->dtb);
    fflush(stdin);
}
void nhapNgaySinh(struct Ngay *ptr)
{
    scanf("%d %d %d", &ptr->ngay, &ptr->thang, &ptr->nam);
}
void inSV(struct SinhVien sv)
{
    printf("Ho ten: %s\n", sv.hoTen);
    printf("Gioi tinh: %s\n", sv.gioiTinh ? "Nam" : "Nu");
    printf("Ngay sinh(ngay thang nam): %d/%d/%d\n", sv.ngaySinh.ngay, sv.ngaySinh.thang, sv.ngaySinh.nam);
    printf("DTB: %f\n", sv.dtb);
}
int tinhTuoi(struct SinhVien sv)
{
    return 2021 - sv.ngaySinh.nam;
}
int soNgay(struct Ngay user1, struct Ngay user2)
{
    if(user1.nam != user2.nam)
        return user1.nam - user2.nam;
    else if(user1.thang != user2.thang)
        return user1.thang - user2.thang;
    else if(user1.ngay != user2.ngay)
        return user1.ngay - user2.ngay;
    else 
        return 0;
}
int soNgaySinh(struct SinhVien sv1, struct SinhVien sv2)
{
    return soNgay(sv1.ngaySinh, sv2.ngaySinh);
}