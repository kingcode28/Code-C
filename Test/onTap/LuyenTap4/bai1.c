#include <stdio.h>

void nhapMang(float a[], int n)
{
    for(int i = 0; i < n; i++)
        scanf("%f", &a[i]);
}
void inMang(float a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%-5f", a[i]);
}
float thoiGianChayNN(float a[], int n)
{
    float min = a[0];
    for(int i = 0; i < n; i++)
        if(min > a[i]) min = a[i];
    return min;
}
int tong3NgayChayNN(float a[], int n)
{
    int minI = 0;
    float tong, kq;
    kq = a[0] + a[1] + a[2];
    for(int i = 1; i < n-2; i++)
    {
        tong = a[i] + a[i+1] + a[i+2];
        if(tong < kq)
        {
            kq = tong;
            minI = i;
        }
    }
    return minI;
}
float docTep()
{
    int n;
    float tg, tong = 0;
    FILE *f;
    f = fopen("thanhtich.txt", "r");
    if(f == NULL) printf("Loi");
    fscanf(f, "%d", &n);
    for(int i = 0; i < n; i++)
    {
        fscanf(f, "%f", &tg);
        tong += tg; 
    }
    return (float)tong/n;
}

int main()
{
    int n;
    printf("So ngay luyen tap: "); scanf("%d", &n);
    float x[n];
    nhapMang(x, n);
    printf("Thanh tich thap nhat: %g\n", thoiGianChayNN(x, n));
    int result = tong3NgayChayNN(x, n);
    printf("3 ngay lien tiep co thanh tich te nhat: %g %g %g\n", x[result], x[result+1], x[result+2]);
    printf("Trung binh n ngay chay: %g", docTep());
}