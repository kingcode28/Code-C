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
    f = fopen( "D:\\Data\\Bai11KieuTep\\sovtchan.txt", "w" );
    for(i = 0; i < n; i += 2)
        fprintf(f, "%d ", a[i]);
    fclose( f );
}
int docTep()
{
    int i, tong, dem, p;
    tong = dem = 0;
    FILE *f;
    f = fopen( "D:\\Data\\Bai11KieuTep\\sovtchan.txt", "r" );
    do
    {
        p = fscanf( f, "%d", &i );
        if ( p != EOF )
        { 
           tong += i;
           dem++;
        }
    } while ( p != EOF );
    fclose( f );
    return tong;
}
int main()
{
    int a[15];
    nhapMang(a, 10);
    ghiTep(a, 10);
    printf( "%d", docTep() );
}