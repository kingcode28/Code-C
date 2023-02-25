#include <stdio.h>

void nhapMang(int a[], int n);
void inMang(int a[], int n);
int timSoLonNhat(int a[], int n);
void taoMangCacSoChan(int a[], int n, int b[], int *soPT);
double trungBinhCong(int a[], int n);
int timPhanTu(int a[], int n, int x);
void sapTang(int a[], int n);
void ghepHaiMangTang(int a[], int n, int b[], int m, int c[]);
void soLanXuatHienTungPhanTu(int a[], int n);

int main()
{
    int n = 5;
    int m = 3;
    int l = m + n;
    int soPT = 0;
    int a[] = {1, 3, 1, 7, 9};
    int b[] = {2, 4, 6};
    int c[l];

    soLanXuatHienTungPhanTu(a, n);

    return 0;
}

void nhapMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void inMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}

int timSoLonNhat(int a[], int n)
{
    int iMax = 0;
    for(int i = 1; i < n; i++)
    {
        if(a[i] > a[iMax])
        {
            iMax = i;
        }
    }
    return iMax;
}

void taoMangCacSoChan(int a[], int n, int b[], int *soPT) {
    for(int i = 0; i < n; i++)
    {
        if(a[i]%2 == 0)
        {
            b[*soPT] = a[i];
            *soPT += 1;
        }
    }
}

double trungBinhCong(int a[], int n)
{
    double tb = 0;
    for(int i = 0; i < n ; i++)
    {
        tb += a[i];
    }
    return tb;
}

int timPhanTu(int a[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            return i;
        }
    }
}

void sapTang(int a[], int n)
{
    int i, j;
    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
}

void ghepHaiMangTang(int a[], int n, int b[], int m, int c[])
{
    int i, j, k;
    i = j = k = 0;
    while(1)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
        if(i == n || j == m) break;
    }
    for(; i < n; i++)
    {
        c[k] = a[i];
        k++;
    }
    for(; j < m; j++)
    {
        c[k] = b[j];
        k++;
    }
}
void soLanXuatHienTungPhanTu(int a[], int n)
{
    int chon[n];
    for(int i = 0; i < n; i++)
        chon[i] = 0;
    
    int i, j, dem;
    for(i = 0; i < n; i++)
    {
        if(chon[i] == 0)
        {
            dem = 1;
            for(j = i+1; j < n; j++)
            {
                if(chon[j] == 0 && a[i] == a[j])
                {
                    chon[j] = 1;
                    dem++;
                }
            }
            chon[i] = 1;
            printf("%d xuat hien %d lan\n", a[i], dem);
        }
    }
}
