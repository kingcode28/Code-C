#include <stdio.h>
#include <string.h>

void cacKiTuOViTriChan(char *xau);
void xoaTuMDenHetXau(char *xau, int k);

int main()
{
    int k;
    char s[100];
    printf("Nhap mot so nguyen n: ");
    gets(s);
    cacKiTuOViTriChan(s);
    printf("\nNhap vi tri muon xoa: ");
    scanf("%d", &k);
    xoaTuMDenHetXau(s, k);
    puts(s);
    printf("%d", strlen(s));
}

void cacKiTuOViTriChan(char *xau)
{
    int i;
    for(i=0; i<strlen(xau); i++)
        if(i%2 == 0)
            printf("%c ", xau[i]);
}
void xoaTuMDenHetXau(char *xau, int k)
{
    int i;
    for(i=0; i<strlen(xau); i++)
    {
        if(i == k)
        {
            xau[i] = '\0';
            break;
        }
    }
}