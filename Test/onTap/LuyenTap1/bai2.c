#include <stdio.h>

struct Diem2D
{
    float x, y;
};
void nhapDiem2D(struct Diem2D *p)
{
    printf("Nhap x, y: ");
    scanf("%f %f", &p->x, &p->y);
}
int diemCoNamTrenTrucKhong(struct Diem2D a)
{
    if(a.x == 0 || a.y == 0) return 1;
    return 0;
}
int main()
{
    struct Diem2D a;
    nhapDiem2D(&a);
    printf(diemCoNamTrenTrucKhong(a) ? "Co" : "Khong");
}