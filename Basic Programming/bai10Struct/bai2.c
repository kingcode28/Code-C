#include <stdio.h>
#include <math.h>

struct Diem2D
{
    int x, y;
};

void nhapDiem2D(struct Diem2D *m);
float khoangCach(struct Diem2D m, struct Diem2D n);

int main()
{
    struct Diem2D a, b;
    nhapDiem2D(&a); nhapDiem2D(&b);
    printf("Khoang cach = %f\n", khoangCach(a, b));
    if(0 == a.y && 0 == a.x) 
        printf("Diem A la goc toa do");
    else if(0 == a.y) 
        printf("Diem A nam tren truc hoanh");
    else if(0 == a.x) 
        printf("Diem A nam tren truc tung");
    else 
        printf("Khong nam tren truc nao");
}

void nhapDiem2D(struct Diem2D *m)
{
    printf("Nhap toa do x: "); scanf("%d", &m->x);
    printf("Nhap toa do y: "); scanf("%d", &m->y);
}
float khoangCach(struct Diem2D m, struct Diem2D n)
{
    return sqrt((m.x - n.x)*(m.x - n.x) + (m.y - n.y)*(m.y - n.y));
}