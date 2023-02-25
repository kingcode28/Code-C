#include <stdio.h>

void nhapVectoNChieu(int v[], int n);
void xuatVectoNChieu(int v[], int n);
int GTNNCuaVectoNChieu(int v[], int n);
int GTLNCuaVectoNChieu(int v[], int n);
void kNhanVectoV(int v[], int n, int u[], int k);
void ghiVectoVaoTep(int v[], int n);

int main()
{
    int n, k;
    printf("So chieu cua vecto: ");
    scanf("%d", &n);
    int x[n], y[n];
    nhapVectoNChieu(x, n);
    xuatVectoNChieu(x, n);
    printf("\nGTLN cua vecto: %d\n", GTLNCuaVectoNChieu(x, n));
    printf("GTNN cua vecto: %d\n", GTNNCuaVectoNChieu(x, n));
    printf("Nhap gia tri k: "); scanf("%d", &k);
    kNhanVectoV(x, n, y, k);
    xuatVectoNChieu(y, n);
    ghiVectoVaoTep(x, n);
}

void nhapVectoNChieu(int v[], int n)
{
    for(int i = 0; i < n; i++)
        scanf("%d", &v[i]);
}
void xuatVectoNChieu(int v[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%3d", v[i]);
}
int GTNNCuaVectoNChieu(int v[], int n)
{
    int min;
    min = v[0];
    for(int i = 1; i < n; i++)
        if(min > v[i]) min = v[i];
    return min;
}
int GTLNCuaVectoNChieu(int v[], int n)
{
    int max;
    max = v[0];
    for(int i = 1; i < n; i++)
        if(max < v[i]) max = v[i];
    return max;
}
void kNhanVectoV(int v[], int n, int u[], int k)
{
    for(int i = 0; i < n; i++)
        u[i] = k * v[i];
}
void ghiVectoVaoTep(int v[], int n)
{
    FILE *f;
    f = fopen("vecto.txt", "w");
    for(int i = 0; i < n; i++)
        fprintf(f, "%-3d", v[i]);
    fclose(f);
}