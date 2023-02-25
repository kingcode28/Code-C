#include <stdio.h>
#include <math.h>

void nhapMang(int a[], int n);
int laSoChinhPhuong(int n);
int demSoChinhPhuong(int a[], int n);
int tim3SoLienTiepLaTGV(int a[], int n);
int laTamGiacVuong(int a, int b, int c);
void docTep();

int main()
{
    int n;
    printf("Nhap do dai mang: "); scanf("%d", &n);
    int a[n];
    nhapMang(a, n);
    printf("Co %d so chinh phuong trong mang\n", demSoChinhPhuong(a, n));
    printf(tim3SoLienTiepLaTGV(a, n) ? "Co\n" : "Khong\n");
    docTep(); 
}

void nhapMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
int laSoChinhPhuong(int n)
{
    int so = sqrt(n);
    if(so*so == n) return 1;
    return 0;
}
int demSoChinhPhuong(int a[], int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
        if(laSoChinhPhuong(a[i])) dem++;
    return dem;
}
int laTamGiacVuong(int a, int b, int c)
{
    if(a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) return 1;
    return 0;
}
int tim3SoLienTiepLaTGV(int a[], int n)
{
    for(int i = 0; i < n-2; i++)
    if(laTamGiacVuong(a[i], a[i+1], a[i+2])) return 1;
    return 0;       
}
void docTep()
{
    int n, max, maxI, diem;
    max = maxI = 0;
    FILE *f;
    f = fopen("diem.txt", "r");
    fscanf(f, "%d", &n);
    for(int i = 0; i < n; i++)
    {
        fscanf(f, "%d", &diem);
        if(diem > max)
        {
            max = diem;
            maxI = i;
        }
    }
    printf("Mon %d co diem %d la cao nhat", maxI, max);
}