#include <stdio.h>

void nhapMang(int a[], int n)
{
    int i;
    for( i = 0; i < n; i++)
        scanf("%d", &a[i]);
}
void ghiTep( int a[], int n )
{
    int i;
    FILE *f;
    f = fopen( "D:\\Data\\Bai11KieuTep\\songuyen.txt", "w" );
    fprintf( f, "%d\n", n );
    for( i = 0; i < n; i++ )
        fprintf( f, "%-3d", a[i] );
    fclose( f );
}
float docTep()
{
    int i, so,p, n, tong = 0;
    FILE *f;
    f = fopen( "D:\\Data\\Bai11KieuTep\\songuyen.txt", "r" );
    fscanf( f, "%d", &n );
    do
    {
        p = fscanf( f, "%d", &so );
        tong += so;
    } while(p != EOF);
    fclose( f );
    return (float)tong / n;
}

int main()
{
    int a[25];
    nhapMang(a, 10);
    ghiTep(a, 10);
    printf("%f", docTep());
}