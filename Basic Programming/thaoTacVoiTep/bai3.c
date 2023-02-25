#include <stdio.h>

void nhapMang(float a[], int n)
{
    int i;
    for(i=0; i<n; i++)
        scanf("%f", &a[i]);
}
void ghiTep(float a[], int n)
{
    int i;
    FILE *f;
    f = fopen("D:\\Data\\Bai11KieuTep\\sothuc.txt", "w");
    fprintf(f, "%d\n", n);
    for(i=0; i<n; i++)
        fprintf(f, "%g\n", a[i]);
    fclose(f);
}
float docTep()
{
    int i, n;
    float so, max = 0;
    FILE *f;
    f = fopen("D:\\Data\\Bai11KieuTep\\sothuc.txt", "r");
    fscanf(f, "%d", &n);
    for(i=0; i<n; i++)
    {
        fscanf(f, "%g", &so);
        if(max < so) max = so;
    }
    fclose(f);
    return max;
}
int main()
{
    float a[6];
    nhapMang(a, 6);
    ghiTep(a, 6);
    printf("Max = %g", docTep());
}