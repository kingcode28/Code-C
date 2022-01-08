#include <stdio.h>

void inCacSoCuaMangThanh2Hang(int a[], int n)
{
    for(int i = 0; i < n; i++)
        if(a[i]%2 == 0) printf("%d", a[i]);
    putchar('\n');
    for(int i = 0; i < n; i++)
        if(a[i]%2 != 0) printf("%d", a[i]);
}
int demSoChanVTLe(int a[], int n)
{
    int dem = 0;
    for(int i = 1; i < n; i++)
        if(a[i]%2 == 0) dem++;
    return dem;
}
int uocChanLonNhat(int k)
{
    if(k%2 != 0 || k == 2) return 0;
    for(int i = (k/2) - (k/2)%2; i >= 2; i -= 2)
        if(k%i == 0) return i;
}
void ghiTep(int a[], int n)
{
    FILE *f;
    f = fopen("sole.txt", "w");
    for(int i = 1; i < n; i += 2)
        fprintf(f, "%d\n", a[i]);
    fclose(f);
}

int main()
{
    int a[] = {6, 8, 10, 12, 14};
    inCacSoCuaMangThanh2Hang(a, 5);
    printf("\nCo %d so chan o vi tri le", demSoChanVTLe(a, 5));
    for(int i = 0; i < 5; i++)
        printf("\nSo %d co uoc chan lon nhat la: %d", a[i],uocChanLonNhat(a[i]));
    ghiTep(a, 5);
}